#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 128

void print_foo(char foo[20][31])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%s\n", foo[i]);
    }
}
void foo_file(FILE *fp, char foo[20][31])
{
    for (int i = 0; i < 20; i++)
    {
        fprintf(fp, "%s\n", foo[i]);
    }
} 

void int_to_char(int rows, int cols, int array[rows][cols], char foo[20][31])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            switch (array[i][j])
            {
            case 0:
                foo[i][j] = ' ';
                break;
            case 1:
                foo[i][j] = '.';
                break;
            case 2:
                foo[i][j] = '\'';
                break;
            case 3:
                foo[i][j] = ':';
                break;
            case 4:
                foo[i][j] = '~';
                break;
            case 5:
                foo[i][j] = '*';
                break;
            case 6:
                foo[i][j] = '=';
                break;
            case 7:
                foo[i][j] = '%';
                break;
            case 8:
                foo[i][j] = '@';
                break;
            case 9:
                foo[i][j] = '#';
                break;
            }

        }
        foo[i][30] = '\0';
    }
}

int main()
{   
    FILE *fp;
    int array[20][30];
    char foo[20][31];
    char ch;
    if((fp = fopen("test.txt", "r")) == NULL)
    {
        fprintf(stderr, "Не удалось открыть файл test.txt\n");
        exit(EXIT_FAILURE);
    }
    for (int count = 0, i, k; ch != EOF; count++)
    {
        i = 0; 
        k = 0;
        while ((ch = getc(fp)) != '\n' && ch != EOF)
        {
            if (i++ % 2 == 0)
            {
                array[count][k++] = ch - '0';
            }
        }
    }
    fclose(fp);
    int_to_char(20, 30, array, foo);
    fp = fopen("result.txt", "w+");
    foo_file(fp, foo);
    fclose(fp);
    print_foo(foo);
    puts("Программа завершена!");
    return 0;
}
 
