#include "queue.h"

Queue_t* createQueue(unsigned capacity)
{
    Queue_t *lp_create_queue = (Queue_t *) malloc(sizeof(Queue_t));

    int *lp_create_array    = (int *) malloc(capacity);

    lp_create_queue->capacity = capacity;

    lp_create_queue->size = 0;

    lp_create_queue->array = lp_create_array;

    lp_create_queue->front = NULL;
    lp_create_queue->rear  = NULL;
}

erorr_queue_t isFull(Queue_t* queue)
{
    return (queue->size == queue->capacity) ? QUEUE_E_FULL : QUEUE_E_NOT_OK;
}
erorr_queue_t isEmpty(Queue_t* queue)
{
    return (queue->size < queue->capacity) ? QUEUE_E_EMTY : QUEUE_E_NOT_OK;
}

erorr_queue_t enqueue(Queue_t* queue, int item)
{
    int *array = queue->array;
    array[queue->size++] = item;

    queue->front = &array[0];
    queue->rear = &array[(queue->size-1)];
}
int dequeue(Queue_t* queue)
{
    int *array = queue->array;
    int deque_item = array[0];
    for(int i = 0; i < queue->size; i++)
    {
       array[i] = array[i+1];
    }
    array[queue->size] = 0;
    if(queue->size != 0)
    {
        queue->size--;
    }
    queue->rear = &array[(queue->size-1)];
    return deque_item;
}