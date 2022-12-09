#include <stdio.h>
#include <string.h>


void printArray(int rows, int cols, int array[][cols])
{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void spiral(int rows, int cols, int array[rows][cols])
{
    int number = 1;
    int count = rows % 2 == 0 ? rows / 2 : rows / 2 + 1;

    for (int n = 0; n < count; n++){

        for (int i = n; i < cols - n; i++){
            array[n][i] = number++;
        }

        for (int j = n+1; j < rows - n; j++){
            array[j][cols-n-1] = number++;
        }

        for (int k = cols-n-2; k >= n; k--){
            array[cols-n-1][k] = number++;
        }

        for (int l = cols-n-2; l > n; l--){
            array[l][n] = number++;
        }

    }

}

int main()
{
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int array[rows][cols];
   
    spiral(rows, cols, array);
    
    printArray(rows, cols, array);

    return 0;
}