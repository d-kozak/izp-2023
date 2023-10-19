#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(){
    int pole[SIZE]; 
    for(int i = 0 ; i < SIZE ; i++){
        scanf("%d",&pole[i]);
    }
    for(int i = SIZE-1 ; i >= 0 ; i--){
        printf("%d ",pole[i]);
    }
    printf("\n");

    int max = pole[0];
    for(int i = 1 ; i < SIZE ; i++){
        if(max < pole[i])
            max = pole[i];
    }
    printf("Max elem: %d\n",max);

}