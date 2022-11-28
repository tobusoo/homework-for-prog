#include <stdio.h>

void printArray(int *begin, int *end)
{
    for (int *i = begin; i < end; i++){
        printf("%d ", *i);
    }
    printf("\n");
}

int *find_element(int *begin, int *end, int value)
{
    for (int *current = begin; current < end; current++){
        if (*current == value){
            *current = -value;
            return current;
        }
    }
    return NULL;
}

int main()
{
    int size, value;
    int *begin;
    int *end;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];
    begin = array;
    end = array + size;

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
 
    printf("Enter element to find: ");
    scanf("%d", &value);

    find_element(begin, end, value);

    printf("\nResult: ");
    printArray(begin, end);

    return 0;
}