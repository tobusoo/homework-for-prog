#include <stdio.h>
#include <math.h>
#include <string.h>

int to_dec(char *string, char *end)
{
    int digit = 0;
    int k = 0;
    for (char *cur = end; cur >= string; cur--, k++){
        if (*cur == '1'){
            digit += pow(2, k); 
        }
    }
    return digit;
}

int main()
{
    char string[50];
    printf("Enter string: ");
    scanf("%s", string);

    char *end = strlen(string) + string - 1;
    printf("digit = %d\n", to_dec(string, end));

    return 0;
}