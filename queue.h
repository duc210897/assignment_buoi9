#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


enum e_error_queue
{
   QUEUE_E_OK,
   QUEUE_E_NOT_OK,
   QUEUE_E_NO_VALUE,
   QUEUE_E_FULL,
   QUEUE_E_EMTY,
   QUEUE_E_OVERLOAD,
} typedef erorr_queue_t;

struct St_Queue {
 int *front;
 int *rear;
 int size;
 int capacity;
 void *array;  // it be great if it is used for any type
} typedef Queue_t;


Queue_t* createQueue(unsigned capacity);
erorr_queue_t isFull(Queue_t* queue);
erorr_queue_t isEmpty(Queue_t* queue);
erorr_queue_t enqueue(Queue_t* queue, int item);
int dequeue(Queue_t* queue);



