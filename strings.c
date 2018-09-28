int my_strlen(char *s)
{
    int len = 0;
    while (*s++)
    {
        len++;
    }
    return len;
}

char* my_strcat(char *dest, char *source)
{
    char *p = dest;
    // find null terminator
    while (*p)
    {
        p++;
    }
    // add source string including the null terminator
    //while (*p = *source++);
    while (*source)
    {
        *p++ = *source++;
    }
    return dest;
}
