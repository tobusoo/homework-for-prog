#include <stdio.h>

void print_arr(int arr[], int length)
{
    for (int i = 0; i < length; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}


void bubble_sort(int arr[], int length)
{
    int cur, inv;
    for (int j = length; j > 1; j--) {
        for (int i = 0; i < length - 1; i++){
            if (arr[i] > arr[i+1]){
                cur = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = cur;
                inv++;
            }
        }
    }
    printf("inv = %d\n", inv);
}


int main()
{
    int length;
    printf("Введите размер массива: ");
    scanf("%d", &length);
    int arr[length];
    printf("Введите %d значений элементов в массиве: ", length);
    for (int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    print_arr(arr, length);
    bubble_sort(arr, length);
    printf("After sort\n");
    print_arr(arr, length);
    return 0;
}