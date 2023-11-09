#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool vector_ctor(vector_t *v, unsigned int size);
void vector_init(vector_t *v);
void vector_dtor(vector_t *v);

void vector_print(vector_t*v){
    printf("[");
    for(int i = 0 ; i < v->size ; i++){
        printf("%d",v->data[i]);
        if(i != v->size -1) printf(",");
    }
    printf("]\n");
}

int main(){
    vector_t v;
    if(!vector_ctor(&v,10)){
        printf("Alloc failed");
        return 1;
    }
    // vector_init(&v);
    // vector_print(&v);

    // vector_multiply(&v,5);
    // vector_print(&v);

    // vector_t v2;
    // if(!vector_ctor(&v2,10)){
    //     printf("Alloc failed");
    //     return 1;
    // }
    // vector_init(&v2);
    
    // vector_add(&v,&v2);
    // vector_print(&v);


    // vector_dtor(&v);
    // vector_dtor(&v2);
    // return 0;
}
    