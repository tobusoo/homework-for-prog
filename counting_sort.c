#include <stdio.h>

void print_arr(int array[], int length)
{
    for (int i = 0; i < length; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n");
}

void countingSort(int array[], int length)
{
    int k;
    int sortedMass[length];
    for (int i = 0; i < length; i++){
        k = 0;
        for (int j = 0; j < length; j++){
            if (array[i] > array[j]){
                k++;
            }
            sortedMass[k] = array[i];
        }
    }
    print_arr(sortedMass, length);
}

int main()
{
    int length;
    printf("Введите размер массива: ");
    scanf("%d", &length);
    printf("Введите %d элементов массива: ", length);
    int array[length];
    for (int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }
    print_arr(array, length);
    countingSort(array, length);
    return 0;
}