#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

const char *usage = "syntax: %s [-x|-y] [-n COUNT] -s STR\n"
    "-x and -y are optional and mutually exclusive\n"
    "-s STR - mandatory, STR is a string\n"
    "-n COUNT - optional, COUNT is non-negative integer (default: 10)\n";

typedef struct {
    bool xflag;
} config_t;

/* GLOBAL CONFIGURATION */
config_t config = {
    .xflag = false
};

/**
* returns 1 if success
*/
bool parse_args(int argc, char **argv){
    
}

int main(int argc, char *argv[]){
    if (parse_args(argc, argv) != 1){
        fprintf(stderr, usage, argv[0]);
        return 1;
    }
    
    if (config.xflag)
        printf("You want to apply -x\n");
    // if (config.yflag)
    //     printf("You want to apply -y\n");
    // printf("COUNT is %u\n", config.nvalue);
    // printf("-s is %s\n",config.svalue);
    return 0;
}
