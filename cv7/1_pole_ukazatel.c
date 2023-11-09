#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = &arr;
    printf("ptr: %p\narr: %p\n", arr, ptr);
    *arr = 42;
    printf("arr[0]: %d\n", arr[0]);
    *ptr = 0;
    printf("arr[0]: %d\n", arr[0]);
    printf("ptr[0]: %d\n", ptr[0]);
    printf("arr: %p\n&arr[0]: %p\nptr: %p\n", arr, &arr[0], ptr);
}