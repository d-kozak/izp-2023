#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 10
typedef struct {
    int items[MAX_SET_SIZE];
    int cardinality;
} set_t ;

/* 
příklad definice množiny
set_t ctyri_prvky = {{1,2,3,4}, 4};
- Naprogramujte funkci, která ověří, zda daná relace odpovídá
funkci.
- Rozšiřte funkci tak, aby našla minimální a maximální bod funkce:
*/
int rel_minmax(pair_t rel[5], set_t set, pair_t *min, pair_t *max);

/*
Implementujte funkci, která provede inverzi bodu (zamění hodnoty ve dvojici):
*/
void pair_invert(pair_t *point);


int main() {

}