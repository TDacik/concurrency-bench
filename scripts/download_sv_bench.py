# Script for downloading of selected SV-COMP test suites
#
# Author: Tomas Dacik (idack@fit.vut.cz), 2023

import os
import base64
import requests


from gitlab import Gitlab

HOST = "https://gitlab.com"
PROJECT_NAME = "SV-Benchmarks"
PROJECT_ID = "30133926"
BRANCH = "main"

CATEGORY_DEF_URL = "https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/raw/main/c/NoDataRace-Main.set"


def find_project():
    gitlab = Gitlab(HOST)
    projects = gitlab.projects.list(search=PROJECT_NAME)

    # TODO: this currently returns arbitrary fork of the original repository
    return projects[0]


def find_subdirs():
    c = requests.get(CATEGORY_DEF_URL).content.decode("utf-8")
    # Drop header
    subdirs = c.split("\n")[1:-1]
    # Update paths
    subdirs = ["c/" + s.replace("/*.yml", "") for s in subdirs]
    return subdirs


def download_dir(project, path, target_path):
    os.makedirs(target_path, exist_ok=True)
    files = project.repository_tree(path=path, all=True)
    for f in files:
        print(f["path"])

        # Recursively download sub-directory
        if f["type"] == "tree":
            dirpath = os.path.join(target_path, f["name"])
            os.makedirs(dirpath, exist_ok=True)
            download_dir(project, f["path"], dirpath)
            continue

        fl = p.files.get(file_path=f["path"], ref=BRANCH)
        content = base64.b64decode(fl.content).decode("utf-8")
        with open(target_path + "/" + f["name"], "w") as target:
            if f["name"].endswith(".yml"):
                content = content.replace("..", "../..")

            target.write(content)


def download(project, subdirs):
    for subdir in subdirs:
        bench_path = subdir.replace("c/", "benchmarks/data_races/")
        download_dir(project, subdir, bench_path)


if __name__ == "__main__":
    p = find_project()
    subdirs = find_subdirs()
    download(p, subdirs)
    download_dir(p, "c/properties/", "benchmarks/properties/")
