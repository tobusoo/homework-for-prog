#include <stdio.h>

void printArr(int array[], int length)
{
    printf("Unique: ");
    for (int i = 0; i < length; i++){
        printf("%d ", array[i]);    
    }
    printf("\n");
}

int unique_copy(int array[], int length)
{
    int len = length;
    for (int i = 0; i < length - 1; i++){
        if (array[i] == array[i+1]){
            len--;
        }
    }
    int arr[len];
    for (int i = 0, k = 0; i <= length; i++, k++){
        if (array[i] == array[i+1]){
            i++;
        } else {
            arr[k] = array[i];
        }
    }
    printf("\n");
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
    len = unique_copy(array, length);
    printf("len = %d\n", len);
    return 0;
}
