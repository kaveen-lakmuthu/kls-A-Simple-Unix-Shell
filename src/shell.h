#ifndef SHELL_H
#define SHELL_H

#define MAX_INPUT 1024
#define MAX_ARGS 64

void shell_start();
void read_input(char *input);
void parse_input(char *input, char **args);
void execute_command(char **args);
void handle_sigint(int sig);

#endif
