//
// Created by ebinsaad on 18/09/17.
//

//#ifndef STACKS_STACK_H
//#define STACKS_STACK_H

//#endif //STACKS_STACK_H


#define MAXSTACK 100

typedef  struct StackElement{

    int data;

}StackElement;



typedef struct stack{
    int top;

    StackElement elements[MAXSTACK];

}Stack;

void InitiateStack(Stack *);

void Push(StackElement, Stack *);

int  IsFullStack(Stack *);

void Pop(StackElement *, Stack *);

int  IsEmptyStack(Stack *);

int  StackSize(Stack *);

void DeleteStack(Stack *);

void StackTop(StackElement *, Stack*);

void TraverseStack(Stack *, void (*)(StackElement));


