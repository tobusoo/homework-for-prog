#include <stdio.h>
#include <string.h>
#define MAX_SYMBOLS 15

int string_to_int(char string[], int length)
{
    int digit = 0;
    int cur_digit;
    int k = 1;
    for (int i = length-1; i >= 0; i--){
        if(string[i] == '-'){
            digit = -digit;
            break;
        }
        if(string[i] == '+'){
            break;
        }
        cur_digit = string[i] - '0';
        digit += k * cur_digit;
        k = k * 10;
    }
    return digit;
}

int main()
{
    int result;
    char string[MAX_SYMBOLS];
    printf("Input string: ");
    scanf("%s", string);
    result = string_to_int(string, strlen(string));
    printf("int = %d\n", result);
    return 0;
}
