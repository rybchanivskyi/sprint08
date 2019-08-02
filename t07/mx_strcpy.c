char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    while (1)
    {
        dst[i] = src[i];
        if (dst[i] == '\0') {
            return dst;
        }
        i++;
    }
    return dst;
}
