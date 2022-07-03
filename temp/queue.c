#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "queue.h"

struct queue {
    double *items;
    int head;
    int capacity;
    int num_items;
};

queue queue_new(){
    queue q;
    q = emalloc(sizeof *q);
    q->head = 0;
    q->num_items = 0;
    q->capacity = 5;
    q->items = emalloc(sizeof q->items[0] * q->capacity);
    return q;
}

void enqueue(queue q, double item){
    if(q->num_items<q->capacity){
        q->items[(q->head + q->num_items) % q->capacity] = item;
        q->num_items++;
    } else {
        fprintf(stderr, "Insert failed\n");
        exit(EXIT_FAILURE);
    }
}

double dequeue(queue q){
    double result;
    if(q->num_items>0){
        result = q->items[q->head];
        q->head = (q->head + 1) % q->capacity;
        q->num_items = q->num_items-1;
        return result;
    } else {
        exit(EXIT_FAILURE);
    }
}


void queue_print(queue q){
    int i;
    for (i = 0; i < q->num_items; i++){
        printf("[%.3f]", q->items[(q->head+i)%q->capacity]);
    }
    printf("\n");

}
int queue_size(queue q){
    return q->num_items;
}
queue queue_free(queue q){
    free(q->items);
    free(q);
    return NULL;
}

