#include <stdio.h>

void printArray (int array[], int size)
{
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubble_sort(int array[], int size)
{
    for (int j = size - 1; j > 0; j--) {
        for (int i = 0; i < j; i++){
            if (array[i] > array[i+1]){
                int current = array[i];
                array[i] = array[i+1];
                array[i+1] = current;
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

    bubble_sort(array, size);
    printArray(array, size);

    return 0;
}