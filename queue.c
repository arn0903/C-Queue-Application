#include "queue.h"

/*
function to initialize the queue
    parameter: queue
*/
void initQueue(t_queue *Q1)
{
    Q1->front_index = 0;
    Q1->rear_index = 0;
    Q1->nb_elem = 0;
}


/*
function to check if it's full
    parameter: queue
*/
int isFull(t_queue *Q)
{
    if (Q->nb_elem == SIZE)
        return 1;
    else
        return 0;
}


/*
function to check if it's empty
    parameter: queue
*/
int isEmpty(t_queue*Q)
{
    if (Q->nb_elem == 0)
        return 1;
    else
        return 0;
}

/*
function to enqueue a new element to the queue
    parameters: queue, new value
*/
void enqueue(t_queue *pointer_q, int new_elem)
{
    //check if queue is full
    if (isFull(pointer_q)==1)
        printf("\nQueue is full\n");
    else
    {

        printf("\nInput value to enqueue: ");
        scanf("%d", &new_elem);

        pointer_q->element[pointer_q->front_index] = new_elem;  //add new element to the array
        printf("\nenqueue value is : %d\n\n", pointer_q->element[pointer_q->front_index]);

        //index rotate to maximize the queue space
        pointer_q->front_index = (pointer_q->front_index+1)%SIZE;
        //increment numbers of elements
        (pointer_q->nb_elem)++;
    }
}


/*
function to dequeue an element from the queue
    parameter: queue
*/
int dequeue(t_queue * pointer_q)
{
    int dequeue_elem;

    //check if queue is empty
    if (isEmpty(pointer_q) == 1)
    {
        printf("\nThe queue is empty\n\n");
        return -1;  //error code

    }
    else
    {
        //add
        dequeue_elem = pointer_q->element[pointer_q->rear_index];
        //rotate elements
        pointer_q->rear_index = (pointer_q->rear_index+1)%SIZE;
        //decrement
        (pointer_q->nb_elem)--;

        return dequeue_elem;
    }
}


/*
menu function
*/
int menu()
{
    int choice;

    printf(" QUEUE\n1-Enqueue\n");
    printf("2-Dequeue\n");
    printf("3-Quit\n");
    do
    {
        printf(" Your choice: ");
        scanf("%d",&choice);
    }
    while ((choice<1)||(choice>3));
    return choice;
}
