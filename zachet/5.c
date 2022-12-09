#include <stdio.h>

int foo(int array[], int len)
{
    int sum = 1; 
    for(int i = 0; i < len; i++){
        if (array[i] % 2 == 1){
            sum *= array[i];
        }
    }
    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result;
    int len = sizeof(array) / sizeof(int);
    result = foo(array, len);
    printf("result: %d\n", result);
    return 0;
}