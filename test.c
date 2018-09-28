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
    printf("====Testing my_strcat()====\n");
    
    char dest1_1[255] = "Do you remember";
    char dest1_2[255] = "Do you remember";

    printf("[mine]: %s\n", my_strcat(dest1_1, " the 21th night of September"));
    printf("[standard]: %s\n\n", strcat(dest1_2, " the 21th night of September"));
}

int main()
{
    test_strlen();
    test_strcat();
    return 0;
}
