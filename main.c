#include "queue.h"

int main(int agc, int *agv[])
{

    Queue_t* queue = createQueue(5);

    // Thêm phần tử vào Queue
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    // Lấy phần tử ra khỏi Queue và in ra
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));

    // Thêm phần tử mới vào Queue
    enqueue(queue, 50);

    // In ra phần tử ở đầu và cuối Queue
    int *array = queue->array;
    printf("Front item is %d\n", *(queue->front));
    printf("Rear item is %d\n",  *(queue->rear));

    return 0;

}