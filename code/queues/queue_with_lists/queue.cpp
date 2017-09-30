//
// Created by ebinsaad on 27/09/17.
//

#include "queue.h"

#include <stdlib.h>


void InitiateQueue(Queue *ptrQ) {
    ptrQ->front= nullptr;
    ptrQ->rear = nullptr;
    ptrQ->size = 0;
}


void Enqueue(QueueElement e, Queue *ptrQ){

    QueueNode * node;
    node = (QueueNode*)malloc(sizeof(QueueNode));
    node->element = e;
    node->next = nullptr;

    if (ptrQ->rear== nullptr){
        ptrQ->front = node;

    }else{
        ptrQ->rear->next = node;
    }
    ptrQ->rear = node;
    ptrQ->size++;
}

int  IsFullQueue(Queue *ptrQ){

    return 0;
}

void Dequeue(QueueElement *ptrE, Queue *ptrQ){

    QueueNode *temp = ptrQ->front;
    *ptrE = ptrQ->front->element;
    ptrQ->front = ptrQ->front->next;
    if (ptrQ->front== nullptr)
        ptrQ->rear = nullptr;
    free(temp);

    ptrQ->size --;
}

int  IsEmptyQueue(Queue *ptrQ){

    return ptrQ->size == 0;
}

int  QueueSize(Queue *ptrQ){
    return  ptrQ->size;
}

void DeleteQueue(Queue *ptrQ){
    QueueNode * temp;

    while(ptrQ->front!= nullptr){
        temp = ptrQ->front;
        ptrQ->front = ptrQ->front->next;
        free(temp);
    }
    ptrQ->rear = nullptr;
    ptrQ->size = 0;

}

void QueueFront(QueueElement *ptrE, Queue*ptrQ){
    *ptrE = ptrQ->front->element;
}

void TraverseQueue(Queue *ptrQ, void (*ptrFun)(QueueElement)){

    QueueNode * crr;
    crr = ptrQ->front;

    while(crr != nullptr){
        (*ptrFun)(crr->element);
        crr = crr->next;
    }
}
