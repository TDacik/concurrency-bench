# Benchexec tool definition for Goblint.
#
# Author: Tomas Dacik (idacik@fit.vut.cz), 2022

import benchexec.result as result

from benchexec.tools.goblint import Tool as Goblint

class Tool(Goblint):

    def executable(self, tool_locator):
        return tool_locator.find_executable("goblint")

    def cmdline(self, executable, options, task, rlimits):
        original = super().cmdline(executable, options, task, rlimits)
        return original + [
                "--ana.sv-comp.enabled=true",
                "--ana.specification=benchmarks/programs/properties/no-data-race.prp",
                "--conf=/home/tom/skola/goblint/analyzer/conf/svcomp22.json",
                ]
