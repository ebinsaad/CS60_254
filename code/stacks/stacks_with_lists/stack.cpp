//
// Created by ebinsaad on 20/09/17.
//

#include "stack.h"
#include <stdlib.h>


void InitiateStack(Stack *ptrStack){

    ptrStack->top = nullptr;
}


void Push(StackElement e, Stack *ptrStack){

    StackNode * node = (StackNode*)malloc(sizeof(StackNode));

    node->element =e;

    node->next = ptrStack->top;

    ptrStack->top = node;
}

void Pop(StackElement *ptre, Stack *ptrStack){
    *ptre = ptrStack->top->element;
    StackNode * temp = ptrStack->top;
    ptrStack->top = ptrStack->top->next;
    free(temp);
}

void StackTop(StackElement *ptre, Stack *ptrStack) {
    *ptre = ptrStack->top->element;
}

int IsFullStack(Stack *ptrStack){

    return 0;
}

int IsEmptyStack(Stack *ptrStack){

    return ptrStack->top == nullptr;
}

int StackSize(Stack *ptrStack){

    StackNode *crr = ptrStack->top;
    int size =0;

    while(crr!= nullptr){
        crr = crr->next;
        size++;
    }

    return size;
}


void DeleteStack(Stack *ptrStack){

    StackNode *crr = ptrStack->top;
    while(crr!= nullptr){
        crr = crr->next;
        free(ptrStack->top);
        ptrStack->top = crr;
    }
}

void TraverseStack(Stack *ptrStack, void (*ptrFun)(StackElement)){

    StackNode *crr = ptrStack->top;

    while(crr!= nullptr){
        (*ptrFun)(crr->element);
        crr = crr->next;
    }
}


