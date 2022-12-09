#include <stdio.h>

void printArray (int array[], int size)
{
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertion_sort(int array[], int size)
{
    for (int i = 1; i < size; i++){
        if (array[i] < array[i-1]){
            for (int j = i; j > 0 && array[j] < array[j-1]; j--){
                int current = array[j];
                array[j] = array[j-1];
                array[j-1] = current;  
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d element of array: ", size);
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    insertion_sort(array, size);
    printArray(array, size);

    return 0;
}