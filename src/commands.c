#include "commands.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int execute_builtin(char **args) {
    if (strcmp(args[0], "cd") == 0) {
        if (args[1] == NULL) {
            fprintf(stderr, "kls: expected argument to \"cd\"\n");
        } else {
            if (chdir(args[1]) != 0) {
                perror("kls");
            }
        }
        return 1;
    }

    if (strcmp(args[0], "help") == 0) {
        printf("kls - A simple UNIX shell\n");
        printf("Available commands:\n");
        printf("  cd <dir>   - Change directory\n");
        printf("  exit       - Exit the shell\n");
        printf("  help       - Show this help message\n");
        return 1;
    }

    if (strcmp(args[0], "exit") == 0) {
        exit(0);
    }

    return 0;
}
