#include <stdio.h>

void printArr(int array[], int length)
{
    printf("Уникальные: ");
    for (int i = 0; i < length; i++){
        printf("%d ", array[i]);    
    }
    printf("\n");
}

void bubleSort(int arr[], int length)
{
    int cur;
    for (int j = length; j > 1; j--) {
        for (int i = 0; i < j - 1; i++){
            if (arr[i] > arr[i+1]){
                cur = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = cur;
            }
        }
    }
}

int unique_copy_unstable(int array[], int length)
{
    bubleSort(array, length);
    int len = length;
    for (int i = 0; i < length - 1; i++){
        if (array[i] == array[i+1]){
            len--;
        }
    }

    int arr[len];
    for (int i = 0, k = 0; i < length; i++){
        if (array[i] != array[i-1]){   
            arr[k] = array[i];
            k++;
        }
    }
    printArr(arr, len);
    return len;
}

int main()
{
    int length;
    int len;
    printf("Введите размер массива: ");
    scanf("%d", &length);
    int array[length];
    printf("Введите %d элементов массива: ", length);  
    for (int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }
    len = unique_copy_unstable(array, length);
    printf("Кол-во элементов = %d\n", len);
    return 0;
}