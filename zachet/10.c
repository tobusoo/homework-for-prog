#include <stdio.h>
#include <ctype.h>

int func(char *string)
{
    int total = 1;
    for (int i = 0; string[i] != '\0'; i++){
        if (isdigit(string[i])){
            total *= string[i] - '0'; 
        }
    }
    return total;
}

int main()
{
    char string[50];
    printf("Enter string: ");
    scanf("%s", string);
    int result = func(string);
    printf("result: %d\n", result);
    return 0;
}
