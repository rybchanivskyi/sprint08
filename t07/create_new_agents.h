#ifndef CREATE_NEW_AGENTS_H
#define  CREATE_NEW_AGENTS_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#include "agent.h"

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
t_agent *mx_create_agent(char *name, int power, int strength);


#endif
