#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // vyres kvadratickou rovnici
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int D = b*b - 4*a*c;
    if(D > 0){
        double x1 = (-b+sqrt(D))/(2.0*a);
        double x2 = (-b-sqrt(D))/(2.0*a);
        printf("x1 = %f\n",x1);
        printf("x2 = %f\n",x2);
    } else if(D == 0){
        double x = -b/(2.0*a);
        printf("x = %f\n",x);
    }
}