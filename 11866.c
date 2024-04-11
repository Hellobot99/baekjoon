#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 1001

typedef int element;

typedef struct
{
    element data[SIZE];
    int rear, front;
} QueueType;

void init(QueueType* Q)
{
    Q->rear = Q->front = -1;
}

void add(QueueType* Q, element e)
{
    Q->rear++;

    Q->data[Q->rear] = e;
}

element del (QueueType* Q)
{
    Q->front++;

    return Q->data[Q->front];
}

int main()
{

    

    return 0;
}
`