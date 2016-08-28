
#include <stdio.h>
#include <stdlib.h>
#include "List.h"

struct Node
{
    Value Element;
    Position Next;
};

int isEmpty( List L )
{
    return L -> Next == NULL;
}

int isLast( Position P, List L )
{
    return P -> Next == NULL;
}

Position find( Value X, List L )
{
    Position P;

    P = L -> Next;
    while (P != NULL && P -> Element != X)
        P = P -> Next;
    return P;
}

