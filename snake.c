#include <stdio.h>
#include <string.h>

void PrintArray(int rows, int cols, int array[][cols])
{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%4d\t", array[i][j]);
        }
        printf("\n");
    }
}

void snake(int rows, int cols, int array[][cols])
{
    // int count = 0;
    // int number = 0;
    // while (count < rows){
    //     if (count % 2 == 0){
    //         for (int i = 0; i < cols; i++){
    //             array[count][i] = number;
    //             number++;
    //         }
    //         count++;
    //     }else{
    //         for (int i = cols-1; i >= 0; i--){
    //             array[count][i] = number;
    //             number++;
    //         }
    //         count++;
    //     }
    // }
    int number = 0;
    for (int count = 0; count < rows; count++){
        if (count % 2 == 0){
            for (int i = 0; i < cols; i++){
                array[count][i] = number;
                number++;
            }
        }else{
            for (int i = cols - 1; i >= 0; i--){
                array[count][i] = number;
                number++;
            }
        }
    }
}

int main()
{
    int rows, cols;
    printf("Enter rows and cols number: ");
    scanf("%d %d", &rows, &cols);
    int array[rows][cols];
    memset(array, 0, sizeof(array));
    snake(rows, cols, array);
    PrintArray(rows, cols, array);
    return 0;
}
