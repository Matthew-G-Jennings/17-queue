#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "queue2.h"

int main(void){
    queue q = queue_new();
    enqueue(q, 1.0);
    queue_print(q);
    enqueue(q, 2.0);
    queue_print(q);
    enqueue(q, 3.0);
    queue_print(q);
    enqueue(q, 4.0);
    queue_print(q);
    enqueue(q, 5.0);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    printf("One cycle complete\n");
    enqueue(q, 1.0);
    queue_print(q);
    enqueue(q, 2.0);
    queue_print(q);
    enqueue(q, 3.0);
    queue_print(q);
    enqueue(q, 4.0);
    queue_print(q);
    enqueue(q, 5.0);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    dequeue(q);
    queue_print(q);
    printf("Two cycle complete\n");

    queue_free(q);
    return EXIT_SUCCESS;
}
