#ifndef SHELL_H
#define SHELL_H

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<stddef.h>
#include<string.h>
#include <sys/wait.h>

/* built function*/
void debut_shell(void);
int non_interactive_mode(char *token);
ssize_t read_command(char **line, size_t *size_line);

/* execute command*/
int execute_command(char *command, char **envp, char **argv);
int execute_command_non_interactive(char *command, char **argv);

/* handle line and delimiters(/n...)*/
char **tokenize_string(char *str, char *delimiters);

/* write messages */
void write_error(void);

/* string fucntion*/
char *_strdup(const char *src);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);

#endif
