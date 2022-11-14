#include <stdio.h>

void min_max_elems(int array[], int length, int* min, int* max)
{
    for (int i = 0; i < length; i++){
        if (array[i] > *max){
            *max = array[i];
        }
        if (array[i] < *min){
            *min = array[i];
        }
    }  
}

int main()
{
    int length;
    int max_elems = 0;
    int min_elems = 100000;
    int* max = &max_elems;
    int* min = &min_elems;
    printf("Введите размер массива: ");
    scanf("%d", &length);
    int array[length];
    printf("Введите %d элементов массива: ", length);  
    for (int i = 0; i < length; i++){
        scanf("%d", &array[i]);
    }

    min_max_elems(array, length, min, max);
    printf("max elems = %d\nmin elems = %d\n", max_elems, min_elems);
    return 0;
}
