#include "sll.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

List list_ctor()
{
    return (List){.first=NULL};
}

Item *item_ctor(Object data)
{
    Item* item = malloc(sizeof(*item));
    if(item == NULL) return NULL;
    item->data = data;
    item->next = NULL;
    return item;
}
 

void list_insert_first(List *list, Item *i)
{
    i->next = list->first;
    list->first = i;
}


bool list_empty(List *list)
{
    return list->first == NULL;
}
 
void list_delete_first(List *list)
{
    if(list_empty(list))
        return;
    Item* tmp = list->first->next;
    free(list->first);
    list->first = tmp;
}

unsigned list_count(List *list)
{
    unsigned cnt = 0;
    for(Item* curr = list->first ; curr != NULL ; curr = curr->next)
        cnt++;
    return cnt;
}

void list_print(List *list){
    printf("[");
    for(Item* curr = list->first ; curr != NULL ; curr = curr->next){
        printf("(%d,%s)",curr->data.id,curr->data.name);
        if(curr->next != NULL)
            printf(", ");
    }
    printf("]\n");
}

Item *list_find_minid(List *list)
{
    if(list_empty(list)){
        return NULL;
    }
    Item* min = list->first;
    for(Item* curr = list->first->next ; curr != NULL ; curr = curr->next){
        if(curr->data.id < min->data.id){
            min = curr;
        }
    }
    return min;
}

Item *list_find_name(List *list, char *name)
{
    for(Item* curr = list->first ; curr != NULL ; curr = curr->next){
        if(strcmp(curr->data.name,name) == 0){
            return curr;
        }
    }
    return NULL;
}

void list_dtor(List *list)
{
    while(!list_empty(list)){
        list_delete_first(list);
    }
}