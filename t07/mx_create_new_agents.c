#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **t = malloc(sizeof(struct s_agent*) * count + 1);

    for (int i = 0; i < count; ++i) {
        t[i] = malloc(sizeof(struct s_agent));
        (t[i])->name = mx_strdup(name[i]);
        (t[i])->power = power[i];
        (t[i])->strength = strength[i];

    }
    (t[count])->name = NULL;
    (t[count])->power= 0;
    (t[count])->strength = 0;
    return t;
}
