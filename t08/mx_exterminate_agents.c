#include "exterminate_agents.h"

static void mx_strdel(char **str) {
    if(str && *str) {
        free(*str);
        *str = NULL;
    }
}

void mx_exterminate_agents(t_agent ***agents) {
    for (int i = 0; (*agents)[i]; ++i) {
      mx_strdel(&(*agents)[i]);
    }
    free(*agents);
    *agents = NULL;
}
