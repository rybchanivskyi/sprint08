#include "nbr_to_hex.h"

static void perevod(unsigned long nbr, char *result) {
    unsigned long num = 0;
    int j = 0;
    while (nbr) {
        num = nbr % 16;
        if (num < 10) {
            result[j] = num + 48;
            j++;
        }
        else if (num <= 16) {
            result[j] = num + 87;
            j++;
        }
        nbr /= 16;
    }
}

static void mx_swap_char(char *s1, char *s2) {
    char temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

static int mx_strlen(const char *s) {
    int i;

    i = 0;
    while(s[i])
        i++;
    return(i);
}

static void mx_str_reverse(char *s) {
    for (int i = 0, j = mx_strlen(s); i < j / 2; i++)
        mx_swap_char(&s[i], &s[j - 1 - i]);
}
char *mx_nbr_to_hex(unsigned long nbr) {
    char *result;
    unsigned long temp = nbr;
    unsigned long num = 0;
    unsigned long size = 0;
    while (temp) {
        num = temp % 16;
        if (num >= 0 && num <= 16)
            size++;
        temp /= 16;
    }
    result = mx_strnew(size);
    perevod(nbr, result);
    mx_str_reverse(result);
    return result;
}
