#include <stdio.h>
#include <string.h>
#include "strings.h"

void test_strlen_case(char* s)
{
    printf("Test Case: \"%s\"\n", s);
    printf("[standard]: %ld\n", strlen(s));
    printf("[mine]: %d\n\n", my_strlen(s));
}

void test_strlen()
{
    printf("====Testing my_strlen()====\n");

    test_strlen_case("");
    test_strlen_case("Allen wrenches");
    char s1[] = "Gerbil feeder";
    test_strlen_case(s1);
    char s2[65535] = "Toilet seats and electric heaters";
    test_strlen_case(s2);
}

void test_strcat_case(char* dest_str, char* src)
{
    char dest1[255];
    char dest2[255];
    strcpy(dest1, dest_str); strcpy(dest2, dest_str);
    printf("Test Case: \"%s\" + \"%s\"\n", dest_str, src);
    printf("[standard]: %s\n", strcat(dest2, src));
    printf("[mine]: %s\n\n", my_strcat(dest1, src));
}

void test_strcat()
{
    printf("====Testing my_strcat()====\n");

    test_strcat_case("Do you remember", " the 21st night of September?");
    test_strcat_case("Stop, collaborate and listen", "");
    test_strcat_case("", "Stop, hammer time");
}

void test_strchr_case(char* s, char target)
{
    printf("Test Case: \"%s\", searching for '%c'\n", s, target);
    printf("[standard]: %p\n", strchr(s, target));
    printf("[mine]: %p\n\n", my_strchr(s, target));
}

void test_strchr()
{
    printf("====Testing my_strchr()====\n");

    test_strchr_case("We haven't had that spirit since 1969", 'r');
    test_strchr_case("Everybody will be dancing and", 'h');
    test_strchr_case("Come on and slam", 'C');
    test_strchr_case("", 'p');
    printf("Note: searching for null terminator\n");
    test_strchr_case("Black hole sun", '\0');
}

void test_strncpy_case(char *dest, char *src, int n)
{
    char dest1[25];
    char dest2[25];
    strcpy(dest1, dest); strcpy(dest2, dest); 
    printf("Test Case: \"%s\" <- \"%s\", copying %d bytes\n", dest, src, n);
    printf("[standard]: %s\n", strncpy(dest2, src, n));
    printf("[mine]: %s\n\n", my_strncpy(dest1, src, n));
}

void test_strncpy()
{
    printf("====Testing my_strncpy()====\n");
    test_strncpy_case("I really like you", "I don't like you", 8);
    test_strncpy_case("......", "buy", 10);
    test_strncpy_case("", "use,", 3);
    test_strncpy_case("break", "", 0);
    test_strncpy_case("fix", ".", 0);
    printf("Note: src larger than dest array (has len 25)\n");
    test_strncpy_case("trash", "123456789.123456789.123456789.", 30);
}

int main()
{
    test_strlen();
    test_strcat();
    test_strchr();
    test_strncpy();
    return 0;
}
