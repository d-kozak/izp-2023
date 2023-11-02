# Zakladni prace s ukazately
* 1_ukazatele.c
* ovládat datové struktury (typu záznam, struct),
* porozumět přímým ukazatelům na data, vysvětlit rozdíl mezi referenčním a dereferenčním operátorem (&, *),
* ovládat práci s předáním parametrů odkazem.
* Výrazy kombinující indexační, referenční a dereferenční operátory.
* Definujte pojmy/Vysvětlete: datový typ ukazatel, referenční, dereferenční operátor, předávání parametrů odkazem, automatická alokace na zásobníku, alokace na hromadě, inicializace pole, předávání pole podprogramům

# Predavani parametru odkazem
* Vytvořte funkci, která zamění hodnoty dvou proměnných deklarované mimo funkci.
* Vytvořte funkci, která zvýší hodnotu parametru předaného odkazem o jedna.
* Vytvořte funkci, která vrací více výsledků.

# Relace jako funkce
* Definujte datový typ pro dvojici čísel (pair_t). Nechť pole dvojic reprezentuje relaci nad množinami čísel. Množina:
```c
#define MAX_SET_SIZE 10
typedef struct {
    int items[MAX_SET_SIZE];
    int cardinality;
} set t ;
// příklad definice množiny
set_t ctyri_prvky = {{1,2,3,4}, 4};
```