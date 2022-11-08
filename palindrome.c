#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_SYMBOLS 100



void cleanPunct(char frase[])
{
    for (int i = 0; i < strlen(frase); i++){
        if (ispunct(frase[i]) || isspace(frase[i])){
            for (int j = i; j < strlen(frase); j++){
                frase[j] = frase[j+1]; 
            }
            i--;
        }
    }
}

void palindrom(char frase[])
{
    int true = 1;
    for (int i = 0, j = strlen(frase)- 1; i < strlen(frase); i++, j--){
        if (!(tolower(frase[i]) == tolower(frase[j]))){
            true = 0;
            break;
        }
    }
    if (true == 1){
        printf("Строка является палиндромом\n");
    } else {
        printf("Строка не является палиндромом\n");
    }
}

int main()
{
    char frase[MAX_SYMBOLS];
    printf("Введите фразу для проверки её на палиндром: ");
    fgets(frase, MAX_SYMBOLS, stdin);
    printf("%s\n", frase);
    cleanPunct(frase);
    palindrom(frase);
    return 0;
}
