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
    while (*p++);
    // decrement because p++ makes p now point to the character
    // after the null terminator, which we need to write over
    p--;
    // keep copying bytes, stopping after \0 is copied
    while (*p++ = *source++);
    return dest;
}

char* my_strchr(char *s, char c)
{
    do
    {
        if (*s == c)
        {
            return s;
        }
    }
    while (*s++);
}

char* my_strncpy(char *dest, char *source, int num)
{
  char *p = dest;
  int i = 0;
  // It'd be a good idea to stop copying if the null terminator is found in dest,
  // but the original strncpy() doesn't, so it just keeps copying bytes into
  // unrelated memory just like strncpy() ¯\_(ツ)_/¯
  for (i = 0; i != num; i++)
  {
    *p++ = *source++;
  }
  return dest;
}
