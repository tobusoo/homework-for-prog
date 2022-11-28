#include <stdio.h>

char *string_suffix(char *string, int len)
{
    while (*string != '\0'){
        string++;
    }
    return string - len;
}

int main()
{
    char string[50];
    int suf_len;

    printf("Enter string: ");
    scanf("%s", string);

    printf("Enter suffix length: ");
    scanf("%d", &suf_len);

    printf("\nSuffix: %s\n", string_suffix(string, suf_len));
    
    return 0;
}