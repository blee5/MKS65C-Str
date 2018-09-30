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
  char *p = source;
  char *q = target;
  //ends while loops when *p ends
  while (*p) {
    //if value equals
    if (*p == *q){
      int i = 0;
      //checks to see if whole string is there
      /*while loop terminates if they values are = or p doesnt
      contain the whole string */
      while (*(p + i) == *(q +i) && i++ < strlen(q) && *(p + i)){
        if(i == strlen(q) - 1){
          return p;
        }
      }
    }
    //checks the next value in the *p
    p++;
  }
}
