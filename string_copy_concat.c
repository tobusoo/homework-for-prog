#include <stdio.h>
#include <string.h>
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


void string_copy_safe(char *out, char *src, size_t count)
{
    while (count-- != 0){
        *out++ = *src++;
        if (*src == '\0'){
            break;
        }
    }    
}

void string_concat_safe(char *out, char *src1, char *src2, size_t count)
{
    while (*src1 != '\0'){
        if (count == 0){
            break;
        }
        count--;
        *out++ = *src1++;
    } 

    while (*src2 != '\0'){
        if (count == 0){
            break;
        }
        count--;
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
    printf("string2: \"%s\"\n", string2);
    printf("buffer1: \"%s\"\n", buf_1);
    printf("buffer2: \"%s\"\n", buf_2);


    string_copy_safe(buf_1, string, sizeof(buf_1)-1);
    printf("buffer1 after copy safe: \"%s\"\n", buf_1);

    string_concat_safe(buf_2, string, string2, sizeof(buf_2)-1);
    printf("buffer2 after concat safe: \"%s\"\n", buf_2);

    
    return 0;
}