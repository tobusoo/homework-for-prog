#include <stdio.h>
#define MAX_SYMBOLS 50


void string_copy(char *out, char *src)
{
    while (*src != '\0'){
        *out++ = *src++;
    }   
}


void string_concat(char *out, char *src1, char *src2)
{
    while (*src1 != '\0'){
        *out++ = *src1++;
    }

    while (*src2 != '\0'){
        *out++ = *src2++;
    }
}


int main()
{
    char string[] = "hello";
    char string2[] = " world!";
    char buf_1[MAX_SYMBOLS] = "";
    char buf_2[MAX_SYMBOLS] = "";

    printf("string: \"%s\"\n", string);
    printf("strin2: \"%s\"\n", string2);
    printf("buffer1: \"%s\"\n", buf_1);
    printf("buffer2: \"%s\"\n", buf_2);

    string_copy(buf_1, string);
    printf("buffer1 after copy: \"%s\"\n", buf_1);

    string_concat(buf_2, string, string2);
    printf("buffer2 after concat: \"%s\"\n", buf_2);

    return 0;
}