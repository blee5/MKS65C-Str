#include <stdio.h>
#include "strings.h"

int main()
{
    printf("====Testing my_strlen()====\n");

    printf("\"\", should be 0\n");
    printf("%d\n\n", my_strlen(""));

    printf("\"Allen Wrenches\", should be 14\n");
    printf("%d\n\n", my_strlen("Allen Wrenches"));

    char s1[] = "Gerbil Feeders";
    printf("\"Gerbil Feeders\" in an array, should be 14\n");
    printf("%d\n\n", my_strlen(s1));

    return 0;
}
