#include <stdio.h>

char *suffix(char *string){
    char *p = NULL;
    while(*string++ != '\0'){
        if (*string == '.'){
            p = string;
        }
    }
    return (char *)p;
}


int main()
{
    char *string = "helle....lo.fd.txt";
    char *p = suffix(string);
    
    printf("suffix: %s\n", p);

    return 0;
}