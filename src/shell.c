#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>

void read_input(char *input) {
    char *buffer = readline("kls> ");
    if (!buffer) exit(EXIT_FAILURE);

    if (strlen(buffer) > 0) {
        add_history(buffer);
        strcpy(input, buffer);
    } else {
        input[0] = '\0';  // Handle empty input properly
    }

    free(buffer);
}

void shell_start() {
    char input[MAX_INPUT];
    char *args[MAX_ARGS];

    signal(SIGINT, handle_sigint);

    while (1) {
        read_input(input);

        if (strlen(input) == 0) continue;  // Ignore empty input

        parse_input(input, args);
        execute_command(args);
    }
}

void handle_sigint(int sig) {
    printf("\nCaught signal %d. Use 'exit' to quit.\nkls> ", sig);
    fflush(stdout);
}
