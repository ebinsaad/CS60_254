//
// Created by ebinsaad on 18/09/17.
//

#include "stack.h"


void InitiateSatck(Stack *ptrStack) {
    ptrStack->top = 0;
}

int StackSzie(Stack *ptrStack) {

    return ptrStack->top;

}

int StackFull(Stack *ptrStack) {
    if (ptrStack->top == MAXSTACK) {
        return 1;
    } else {
        return 0;
    };

}

int StackEmpty(Stack *ptrStack) {
    if (ptrStack->top == 0) {
        return 1;
    } else {
        return 0;
    }
}

void Push(StackElement e, Stack *ptrStack) {

    ptrStack->elements[ptrStack->top] = e;
    ptrStack->top++;
}


void Pop(StackElement *ptre, Stack *ptrStack) {

    *ptre = ptrStack->elements[ptrStack->top - 1];
    ptrStack->top--;
}


void StackTop(StackElement *ptre, Stack *ptrStack) {

    *ptre = ptrStack->elements[ptrStack->top - 1];
}

void TraverseStack(Stack *ptrStack, void (*ptrFun)(StackElement)) {

    for (int i = ptrStack->top; i > 0; i--) {

        (*ptrFun)(ptrStack->elements[i - 1]);
    }
}


void DeleteStack(Stack *ptrStack) {

    ptrStack->top = 0;
}
