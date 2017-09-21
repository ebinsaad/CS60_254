//
// Created by ebinsaad on 20/09/17.
//

//#ifndef STACK_LINKED_LIST_STACK_H
//#define STACK_LINKED_LIST_STACK_H

//#endif //STACK_LINKED_LIST_STACK_H

typedef struct stackelement{
    int value;

}StackElement;

typedef struct stacknode{
    StackElement element;
    struct stacknode *next;
}StackNode;


typedef struct stack{
    StackNode *top;
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
