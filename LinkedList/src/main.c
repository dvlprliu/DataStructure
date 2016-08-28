#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "List.h"
int main()
{
    List l = malloc(sizeof(List));
    l->Element = 0;
    List l2 = malloc(sizeof(List));
    l2->Element = 1;
    List l3 = malloc(sizeof(List));
    l3->Element = 2;

    l->Next = l2;
    l2->Next = l3;


    printList(l);


    return 0;
}
