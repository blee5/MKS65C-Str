#include <stdio.h>
#include <string.h>
#include "strings.h"

void test_strlen()
{
    printf("====Testing my_strlen()====\n");

    printf("Test Case: \"\"\n");
    printf("[mine]: %d\n", my_strlen(""));
    printf("[standard]: %ld\n\n", strlen(""));

    printf("Test Case: \"Allen Wrenches\"\n");
    printf("[mine]: %d\n", my_strlen("Allen Wrenches"));
    printf("[standard]: %ld\n\n", strlen("Allen Wrenches"));

    char s1[] = "Gerbil Feeder";
    printf("Test Case: \"Gerbil Feeder\", in an array\n");
    printf("[mine]: %d\n", my_strlen(s1));
    printf("[standard]: %ld\n\n", strlen(s1));

}

void test_strcat()
{
    // TODO: more test cases
    char dest1[255];
    char dest2[255];
    char *src;

    printf("====Testing my_strcat()====\n");
    char *test1 = "Do you remember,";
    src = " the 21sth night of September?";
    strcpy(dest1, test1); strcpy(dest2, test1); 
    printf("[mine]: %s\n", my_strcat(dest1, src));
    printf("[standard]: %s\n\n", strcat(dest2, src));
}

int main()
{
    test_strlen();
    test_strcat();
    return 0;
}
