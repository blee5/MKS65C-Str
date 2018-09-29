#include <stdio.h>
#include <string.h>
#include "strings.h"

void test_strlen_case(char* s)
{
    printf("Test Case: \"%s\"\n", s);
    printf("[mine]: %d\n", my_strlen(s));
    printf("[standard]: %ld\n\n", strlen(s));
}

//Brian
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
    printf("[mine]: %s\n", my_strcat(dest1, src));
    printf("[standard]: %s\n\n", strcat(dest2, src));
}

void test_strcat()
{
    printf("====Testing my_strcat()====\n");

    test_strcat_case("Do you remember", " the 21sth night of September?");
    test_strcat_case("Stop, collaborate and listen", "");
    test_strcat_case("", "Stop, hammer time");
}

void test_strchr_case(char* s, char target)
{
    printf("Test Case: \"%s\", searching for '%c'\n", s, target);
    printf("[mine]: %p\n", my_strchr(s, target));
    printf("[standard]: %p\n\n", strchr(s, target));
}

void test_strchr()
{
    printf("====Testing my_strchr()====\n");

    test_strchr_case("We haven't had that spirit since 1969", 'r');
    test_strchr_case("Everybody will be dancing and we'll be", 'h');
    test_strchr_case("Can't stop me now", 'C');
    test_strchr_case("", 'p');
    printf("Note: searching for null terminator\n");
    test_strchr_case("Black hole sun", '\0');
}

//Alex
void test_strncpy()
{
    // TODO: more test cases
    char dest1[255];
    char dest2[255];
    char *replace;

    printf("====Testing my_strncpy()====\n");
    char *test1 = "I really like you";
    replace = "I don't  like you";
    strcpy(dest1, test1); strcpy(dest2, test1);
    printf("[standard]: %s\n\n", strncpy(dest2, replace, 8));
    printf("[mine]: %s\n", my_strncpy(dest1, replace, 8));
}

int main()
{
    //Brian
    test_strlen();
    test_strcat();
    test_strchr();
    //Alex
    test_strncpy();
    return 0;
}
