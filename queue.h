#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/*
queue structure
*/
typedef struct queue
{
    char element[SIZE];
    int front_index;
    int rear_index;
    int nb_elem;
} t_queue;

void initQueue(t_queue *Q1);
int isFull(t_queue *Q);
int isEmpty(t_queue*Q);
void enqueue(t_queue *pointer_q, int new_elem);
int dequeue(t_queue * pointer_q);
int menu();

#endif // QUEUE_H_INCLUDED
