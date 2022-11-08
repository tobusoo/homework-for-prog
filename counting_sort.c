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
    // Поиск максимального значения в массиве
    int max = 0;
    for (int i = 0; i < length; i ++){
        if (array[i] > max){
            max = array[i];
        }
    }
    max += 1;
    // Объявление, инициализация и обнуление нового массива 

    int count_arr[max];
    for (int i = 0; i <= max; i++){
        count_arr[i] = 0;
    }
    // count_arr[i] - количество встретившихся в исходном массиве
    // чисел равных i 
    for (int i = 0; i < length; i++){
        count_arr[array[i]]++;
    }
    
    int k = 0;
    for (int i = 0; i < max+1; i++){
        for (int j = 0; j < count_arr[i]; j++){
            array[k] = i;
            k++;
        }
    }
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
    printf("After sort\n");
    print_arr(array, length);
    return 0;
}