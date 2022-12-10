#include <stdio.h>

void printArray (int array[], int size)
{
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int *merge_sort(int *array, int *buffer, int left, int right)
{
    if (left == right){
        buffer[left] = array[left];
        return buffer;
    }

    int middle = left + (right - left) / 2;

    int *l_buff = merge_sort(array, buffer, left, middle);
    int *r_buff = merge_sort(array, buffer, middle + 1, right);

    int *target = l_buff == array ? buffer : array;

    int l_cur = left, r_cur = middle + 1;
    
    for (int i = left; i <= right; i++) {
        if (l_cur <= middle && r_cur <= right) {
            if (l_buff[l_cur] < r_buff[r_cur]) { 
                target[i] = l_buff[l_cur];
                l_cur++;
            } else {
                target[i] = r_buff[r_cur];
                r_cur++;
            }
        }
        else if (l_cur <= middle){
            target[i] = l_buff[l_cur];
            l_cur++;
        } else {
            target[i] = r_buff[r_cur];
            r_cur++;
        }
    }
    return target;
}

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];
    int buffer[size];
    printf("Enter %d element of array: ", size);
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    int *p = merge_sort(array, buffer, 0, size-1);
    printArray(p, size);
    return 0;
}
