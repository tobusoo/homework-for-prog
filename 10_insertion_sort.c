#include <stdio.h>

void insertion_sort(int array[], int length)
{
    int cur, j, inv;

    for (int i = 1; i < length; i++){
        cur = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > cur){
            array[j+1] = array[j];
            j--;
            inv++;
        }
        array[j+1] = cur;
    }
    printf("inv=%d\n", inv);
}

void print_arr(int array[], int length)
{
    for(int i = 0; i < length; i++){
        printf("arr[%d] = %d\n", i, array[i]);
    }
}

int main()
{
    int length;
    printf("Введите размер массива: ");
    scanf("%d", &length);
    int array[length];
    printf("Введите %d элементов массива: ", length);
    for (int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }
    print_arr(array, length);
    insertion_sort(array, length);
    printf("After sort\n");
    print_arr(array, length);
    return 0;
}