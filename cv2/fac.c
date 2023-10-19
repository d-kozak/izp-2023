#include <stdio.h>
#include <stdlib.h>

int factorial(int x){
    int res=1;   
    for(int i = 2;i <= x;i++){
        res *= i;
    }
    return res;
}

int main(){
    // vypocitej faktorial
    int x;
    scanf("%d",&x);
    printf("%d! = %d\n",x,factorial(x));
}