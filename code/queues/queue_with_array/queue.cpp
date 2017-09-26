//
// Created by ebinsaad on 26/09/17.
//

#include "queue.h"

void InitiateQueue(Queue *ptrQ){

    ptrQ->front=0;
    ptrQ->rear=-1;
    ptrQ->size=0;
}

void Enqueue(QueueElement e, Queue *ptrQ){


    ptrQ->rear = (ptrQ->rear+1) % MAXQUE;

    ptrQ->elements[ptrQ->rear] = e;
    ptrQ->size++;
}

int  IsFullQueue(Queue *ptrQ){

    return ptrQ->size == MAXQUE;
}

void Dequeue(QueueElement *ptrE, Queue *ptrQ){
    *ptrE = ptrQ->elements[ptrQ->front];
    ptrQ->front = (ptrQ->front+1) % MAXQUE;
    ptrQ->size--;
}

int  IsEmptyQueue(Queue *ptrQ){

    return ptrQ->size == 0;
}

int  QueueSize(Queue *ptrQ){
    return  ptrQ->size;
}

void DeleteQueue(Queue *ptrQ){
    ptrQ->front=0;
    ptrQ->rear=-1;
    ptrQ->size=0;
}

void QueueFront(QueueElement *ptrE, Queue*ptrQ){
    *ptrE = ptrQ->elements[ptrQ->front];
}

void TraverseQueue(Queue *ptrQ, void (*ptrFun)(QueueElement)){

    int count =1;
    int index = ptrQ->front;

    while (count<=ptrQ->size) {
            (*ptrFun)(ptrQ->elements[index]);
            index = (index + 1)%MAXQUE;
            count++;
        }
}
