#include <stdio.h>

#define MAX_SIZE 10

typedef struct
{
    int data[MAX_SIZE];
    int length;
} SeqList;

void initList(SeqList *p)
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        (*p).data[i] = 0;
    }
    (*p).length = 0;
}

int main()
{
    SeqList L;
    initList(&L);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("L.data[%d]: %d\n", i, L.data[i]);
    }

    return 0;
}
