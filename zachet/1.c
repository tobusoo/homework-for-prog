#include <stdio.h>

void printArray (int array[], int size)
{
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selection_sort(int array[], int size)
{
    for (int i = 0; i < size; i++){
        int min_i = i;
        for (int j = i; j < size; j++){
            if (array[j] < array[min_i]) {
                min_i = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_i];
        array[min_i] = temp;
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
    
    selection_sort(array, size);    
    printArray(array, size);

    return 0;
}
