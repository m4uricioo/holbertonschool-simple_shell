#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

char *get_line(void);
char **format_line(char *ln);
char *comp(char *token, char *val);
int exec_com(char **command);
void search_exe(char **command);
char *_getenv(char *name);
void sighandler(int i);
int _putchar(char c);

#endif
