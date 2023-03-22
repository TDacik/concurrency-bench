# Benchexec tool definition for Racer.
#
# Author: Tomas Dacik (idacik@fit.vut.cz), 2022

import benchexec.result as result

from benchexec.tools.template import BaseTool2

class Tool(BaseTool2):

    def name(self):
        return "Racer"

    def executable(self, tool_locator):
        return tool_locator.find_executable("frama-c")

    def cmdline(self, executable, options, task, rlimits):
        options = [executable] + ["-racer"] + options + list(task.input_files_or_identifier)
        return options

    def determine_result(self, run):
        for line in run.output:
            if "Data race on variable" in line:
                return result.RESULT_TRUE_PROP

        return result.RESULT_FALSE_PROP
