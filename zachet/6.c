#include <stdio.h>

void delete(char string[])
{
    char cur;
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == 'e' || string[i] == 'a'){
            for (int j = i; string[j] != '\0';j++){
                if (string[j+1] == '\0'){
                    string[j] = string[j+1];
                    break;
                }
                cur = string[j];
                string[j] = string[j+1];
                string[j+1] = cur;
            }
        }
    }   
}

int main()
{
    char string[] = "abeoyesuki";
    printf("%s\n", string);
    delete(string);
    printf("%s\n", string);
    return 0;
}