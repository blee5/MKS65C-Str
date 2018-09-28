//Brian
int my_strlen(const char *s)
{
    int len = 0;
    while (*s++)
    {
        len++;
    }
    return len;
}

char* my_strcat(char *dest, const char *source)
{
    char *p = dest;
    while (*p++);
    // decrement because p++ makes p now point to the character
    // after the null terminator, which we need to write over
    p--;
    while (*p++ = *source++);
    return dest;
}


//Alex
char* my_strncpy(char *dest, char *source, int num )
{
  char *p = dest;
  int i = 0;
  while (*p && i != num){
    i++;
    *p = *source++;
    printf("%c\n", *p++);
  }
  return dest;
}
