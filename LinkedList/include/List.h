#ifndef _LIST_H

typedef int Value;

struct Node
{
    Value Element;
    struct Node *Next;
};
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

// operations
List makeEmpty( List L );
int isEmpty( List L );
int isLast( Position P, List L );
Position find( Value X, List L );
Position findPrevious( Value X, List L );
void Delete( Value X, List L );
void Insert( Value X, List L, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
Value Retrieve( Position P );
void printList( List L );

#endif
