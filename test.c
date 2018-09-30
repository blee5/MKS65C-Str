#include <stdio.h>
#include <string.h>
#include "strings.h"


//strlen
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


//strcat
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


//strchr
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

//strncpy
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
    //test_strncpy_case("trash", "123456789.123456789.123456789.", 30);
}

//strncmp
void test_strcmp_case(char *dest, char *src)
{
    char dest1[25];
    char dest2[25];
    strcpy(dest1, dest); strcpy(dest2, dest);
    printf("Test Case: \"%s\" : \"%s\", comparing \n" , dest, src);
    printf("[standard]: %d\n", strcmp(dest2, src));
    printf("[mine]: %d\n\n", my_strcmp(dest1, src));
}

void test_strcmp()
{
    printf("====Testing my_strcmp()====\n");
    test_strcmp_case("hello", "hello");
    test_strcmp_case("a", "b");
    test_strcmp_case("aaa", "bbb");
    test_strcmp_case("aaa", "baa");
    test_strcmp_case("......", "one");
    test_strcmp_case("", "two,");
    test_strcmp_case("three", "");
    test_strcmp_case("four", ".");
    test_strcmp_case("five", "123456789.123456789.123456789.");
    test_strcmp_case("hello", "hel");
    test_strcmp_case("I really like you", "I don't like you");
    test_strcmp_case("aaa", "aad");
}

//strchr
void test_strstr_case(const char* s, const char* target)
{
    printf("Test Case: \"%s\", searching for \"%s\"\n", s, target);
    printf("[standard]: %p\n", strstr(s, target));
    printf("[mine]: %p\n\n", my_strstr(s, target));
}

void test_strstr()
{
    printf("====Testing my_strstr()====\n");

    test_strstr_case("We haven't had that spirit since 1969", "r");
    test_strstr_case("We haven't had that spirit since 1969", "1969");
    test_strstr_case("Everybody will be dancing and", "home");
    test_strstr_case("Come on and slam", "Clam");
    test_strstr_case("And welcome to the jam", "jim");
    test_strstr_case("", "p");
    printf("Note: searching for null terminator\n");
    test_strstr_case("Black hole sun", "\0");
}

int main()
{
    test_strlen();
    test_strcat();
    test_strchr();
    test_strncpy();
    test_strcmp();
    test_strstr();
    return 0;
}
