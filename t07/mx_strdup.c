#include "create_new_agents.h"

char *mx_strdup(const char *str) {
    char *new;
    int len = mx_strlen(str);

    new = mx_strnew(len);
    if (new == NULL) {
        return NULL;
    }
    mx_strcpy(new, str);
    return new;
}
