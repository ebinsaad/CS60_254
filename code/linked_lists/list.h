//
// Created by ebinsaad on 28/09/17.
//

//#ifndef LINKEDLIST_LIST_H
//#define LINKEDLIST_LIST_H

//#endif //LINKEDLIST_LIST_H

typedef struct ListData{
    int value;
    char *text;
} ListData;


typedef  struct ListNode{
    ListData data;
    ListNode * next;
} ListNode;


typedef  struct LinkedList{
    ListNode * head;
    int size;
}LinkedList;

void InitiateList(LinkedList *);

void InsertNode(ListData, LinkedList *);

void DeleteNode(ListData *, LinkedList *);

int IsEmptyList(LinkedList *);

int IsFullList(LinkedList *);

int ListSize(LinkedList *);

void ClearList(LinkedList *);

void TraverseList(LinkedList*, void (*)(ListData));

void InsertNodeAt(ListData , LinkedList *, int);

void DeleteNodeAt(ListData *, LinkedList *, int);

void SortList(LinkedList*, int (*)(ListData, ListData));

