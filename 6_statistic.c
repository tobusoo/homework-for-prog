#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch, count_gl = 0, count_n = 0, count_zn = 0;
    float percent, count_b = 0.0, count_all = 0.0;
    char chr = '%';
    printf("Введите символы: \n");
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch) != 0){
            ++count_b;
        }
        if (ch == 65 || ch == 97 || ch == 69 || ch == 101){
            ++count_gl;
        }
        else if (ch == 73 || ch == 105 || ch == 79 || ch == 111){
            ++count_gl;
        }
        else if (ch == 85 || ch == 117 || ch == 89 || ch == 121){
            ++count_gl;
        }

        if (ch >= 48 && ch <=  57){
            ++count_n;
        }
        
        if (ch == 33 || ch == 46 || ch == 63 || ch == 44 || ch == 58 || ch == 59){
            ++count_zn;
        }
        if (isalnum(ch)){
            ++count_all;
        }
    }
    percent = (float)(count_b / (count_all)) * 100;
    printf("\n");
    printf("Кол-во гласных = %d\n", count_gl);
    printf("Кол-во цифр = %d\n", count_n);
    printf("Кол-во знаков препинания = %d\n", count_zn);
    printf("Процент букв от всех символов = %.f%c\n", percent, chr);
    return 0;
}
