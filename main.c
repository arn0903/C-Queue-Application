#include "queue.h"





int main()
{
    t_queue Myqueue;
    int new_val = 0;
    int dequeue_elem;

    initQueue(&Myqueue);

    int choose;
    do
    {
        //menu
        choose = menu();
        switch(choose)
        {

        //menu 1: enqueue
        case 1:
            enqueue(&Myqueue, new_val);
            break;

        //menu 2: dequeue
        case 2:
            dequeue_elem = dequeue(&Myqueue);

            if(dequeue_elem!=-1)
                printf("\nDequeue value is %d\n\n", dequeue_elem);
            break;

        //menu 3: quit
        case 3:
            printf("Goodbye\n");
            break;


        default:
            printf("ERREUR INPUT VALUE\n");
        }


    }
    while(choose!=3);


    return 0;
}

