#include <stdio.h>

int func(char *string)
{
    int max_len = 0;
    int len = 1;
    for (int i = 0; string[i] != '\0';i++) {
        if (string[i] == string[i+1]-1) {
            len++;
            if (len > max_len){
                max_len = len;
            }
        } else {
            len = 1;
        }
    }
    return max_len;
}

int main()
{
    char string[] = "abchollabcdefghmollaabcde";
    int result = func(string);
    printf("result: %d\n", result);
    return 0;
}