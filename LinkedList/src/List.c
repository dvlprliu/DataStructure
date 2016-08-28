#include <stdio.h>
#include <stdlib.h>
#include "List.h"

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

Position findPrevious( Value X, List L )
{
    Position P;

    P = L;

    while( P->Next != NULL && P->Next->Element != X )
        P = P->Next;

    return P;
}

void Delete( Value X, List L )
{
    Position P, TmpCell;
    P = findPrevious(X, L);

    if ( !isLast(P, L) )
    {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }

}

void Insert( Value X, List L, Position P )
{
    Position TmpCell;
    TmpCell = malloc(sizeof(Position));
    if (!TmpCell)
        return;

    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}

void DeleteList( List L )
{
    Position P, Tmp;

    P = L->Next;
    Tmp = P->Next;
    while ( P != NULL )
    {
        Tmp = P->Next;
        free(P);
        P = Tmp;
    }
}

void printList( List L )
{
    if (isEmpty(L)) {
        return;
    }
    Position P;
    P = L;
    while(P)
    {
        printf("%i\n", P->Element);
        P = P->Next;
    }
}
