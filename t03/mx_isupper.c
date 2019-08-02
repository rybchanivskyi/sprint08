#include <stdbool.h>

bool mx_isupper(int c) {
    if(c >= 'A' && c <= 'Z') {
        return true;
    }
    return false;
}
