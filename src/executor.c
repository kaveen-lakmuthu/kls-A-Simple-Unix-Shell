#include "executor.h"
#include "commands.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void execute_command(char **args) {
    if (args[0] == NULL) return;  // Empty command
    
    if (execute_builtin(args)) return;  // Handle built-in commands

    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        if (execvp(args[0], args) == -1) {
            fprintf(stderr, "kls: command '%s' not found\n", args[0]);
        }
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        // Parent process
        wait(NULL);
    } else {
        perror("fork failed");
    }
}
