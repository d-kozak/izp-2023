#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_arr(int* arr, int size){
    printf("[");
    for(int i = 0 ; i < size ;i++){
        printf("%d",arr[i]);
        if(i != size -1 ) printf(",");
    }
    printf("]\n");
}

int main() {
    int arr[] = {1,2,3,4,5};
    print_arr(arr,5);
    arr_multiply(arr,5,2);
    print_arr(arr,5);

    // char msg[] = "My interesting message";
    // printf("%s\n",msg);
    // to_upper(msg);
    // printf("%s\n",msg);

    // char* str = "My long message";
    // printf("%d\n",find_substr(str,"My"));
    // printf("%d\n",find_substr(str,"y l"));
    // printf("%d\n",find_substr(str,"long"));
    // printf("%d\n",find_substr(str,"sag"));
    // printf("%d\n",find_substr(str,"saga"));
    // printf("%d\n",find_substr(str,"sage"));
    // printf("%d\n",find_substr(str,"ge"));
    // printf("%d\n",find_substr(str,"ger"));


    // print_arr(arr,5);
    // arr_insert(arr,5,0,10);
    // print_arr(arr,5);
    // arr_insert(arr,5,4,10);
    // print_arr(arr,5);
    // arr_insert(arr,5,3,42);
    // print_arr(arr,5);
}