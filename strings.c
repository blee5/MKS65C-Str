#include <stdio.h>
#include <string.h>

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
    return NULL;
}

char* my_strncpy(char *dest, char *source, int num)
{
  char *p = dest;
  int i;
  // It'd be a good idea to stop copying if the null terminator is found in dest,
  // but the original strncpy() doesn't, so it just keeps copying bytes into
  // unrelated memory just like strncpy() ¯\_(ツ)_/¯
  for (i = 0; i != num; i++)
  {
    *p++ = *source++;
  }
  return dest;
}

signed int my_strcmp(char *first, char *second)
{
  char *p = first;
  char *q = second;
  int i = 0;
  //finds the first difference among the two strings
  while (*p == *q && *p && *q){
    p ++;
    q ++;
  }
  //compares the first difference if it exists
  //if greater
  if (*p > *q){
    while ((*p - i) != *q){
      i++;
    }
    return i;
  }
  //if less
  else if (*p < *q){
    while ((*p + i) != *q){
      i++;
    }
    return -i;
  }
  //if difference doesn't exist
  else {
    return 0;
  }
}


char* my_strstr(char *source, char *target)
{
    int tar_len = strlen(target);
    if (*target == 0)
    {
        return source;
    }
    //ends while loops when *p ends
    while (*source++)
    {
        if (*source == *target)
        {
              int i;
              for (i = 0; i < tar_len; i++)
                  {
                  if (source[i] && source[i] == target[i])
                  {
                      if (i == tar_len - 1)
                      {
                          return source;
                      }
                  }
                  else
                  {
                      break;
                  }
              }
        }
    }
    return NULL;
}
