//
// Created by ebinsaad on 26/09/17.
//

//#ifndef QUEUE_ARRAYS_QUEUE_H
//#define QUEUE_ARRAYS_QUEUE_H

//#endif //QUEUE_ARRAYS_QUEUE_H

#define MAXQUE 100


typedef  struct QueueElement{

    int data;

}QueueElement;



typedef struct Queue{
    int size;
    int front;
    int rear;
    QueueElement elements[MAXQUE];

}Queue;

void InitiateQueue(Queue *);

void Enqueue(QueueElement, Queue *);

int  IsFullQueue(Queue *);

void Dequeue(QueueElement *, Queue *);

int  IsEmptyQueue(Queue *);

int  QueueSize(Queue *);

void DeleteQueue(Queue *);

void QueueFront(QueueElement *, Queue*);

void TraverseQueue(Queue *, void (*)(QueueElement));
