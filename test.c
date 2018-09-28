#include <stdio.h>
#include <string.h>
#include "strings.h"

int main()
{
    printf("====Testing my_strlen()====\n");

    printf("Test Case: \"\"\n");
    printf("[mine]: %d\n", my_strlen(""));
    printf("[standard]: %ld\n\n", strlen(""));

    printf("Test Case: \"Allen Wrenches\"\n");
    printf("[mine]: %d\n", my_strlen("Allen Wrenches"));
    printf("[standard]: %ld\n\n", strlen("Allen Wrenches"));

    char s1[] = "Gerbil Feeders";
    printf("Test Case: \"Gerbil Feeders\", in an array\n");
    printf("[mine]: %d\n", my_strlen(s1));
    printf("[standard]: %ld\n\n", strlen(s1));

    return 0;
}
