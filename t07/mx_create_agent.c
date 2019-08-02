#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    if(!name) {
        return NULL;
    }
    t_agent *t = malloc(sizeof(struct s_agent));
    (*t).name = mx_strdup(name);
    (*t).power = power;
    (*t).strength = strength;

    return t;
}
