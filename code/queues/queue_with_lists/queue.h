//
// Created by ebinsaad on 27/09/17.
//

//#ifndef QUEUE_LIST_QUEUE_H
//#define QUEUE_LIST_QUEUE_H

//#endif //QUEUE_LIST_QUEUE_H

typedef  struct QueueElement{

    int data;

}QueueElement;

typedef struct QueueNode{
    QueueElement element;
    struct QueueNode * next;
}QueueNode;

typedef struct Queue{

    QueueNode * front;
    QueueNode * rear;
    int size;

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
