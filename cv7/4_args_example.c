#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUTNY_POCET 2

int main(int argc, char **argv)
{
    if (argc < NUTNY_POCET){
        fprintf(stderr, "Not enought arguments\n");
        return 1;
    }
    
    // todo 0 vs 1
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
}