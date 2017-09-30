//
// Created by ebinsaad on 28/09/17.
//


#include "list.h"
#include <stdlib.h>


void InitiateList(LinkedList * ptrList){

    ptrList->head= nullptr;
    ptrList->size = 0;
}

void InsertNode(ListData lData, LinkedList *ptrList) {

    ListNode * ptrNode = (ListNode*)malloc(sizeof(ListNode));

    ptrNode->data = lData;

    ptrNode->next = ptrList->head;

    ptrList->head = ptrNode;

    ptrList->size++;
}

void DeleteNode(ListData *ptrlData, LinkedList *ptrList ){

    ListNode * temp = ptrList->head;

    *ptrlData = temp->data;

    ptrList->head = ptrList->head->next;

    free(temp);

    ptrList->size--;
}

void InsertNodeAt(ListData lData, LinkedList *ptrList, int index){

    if (index ==0){

        InsertNode(lData,ptrList);
    }
    else {
        ListNode *curr = ptrList->head;

        int count = 0;


        while (count < index - 1 && curr->next != nullptr) {
            curr = curr->next;
            count++;
        }

        ListNode *ptrNode = (ListNode *) malloc(sizeof(ListNode));

        ptrNode->data = lData;

        ptrNode->next = curr->next;

        curr->next = ptrNode;
        ptrList->size++;
    }


}

void DeleteNodeAt(ListData *ptrlData, LinkedList *ptrList, int index){

    if (index ==0){

        DeleteNode(ptrlData,ptrList);

    }else {

        ListNode *curr = ptrList->head;
        int count = 0;

        while (count < index - 1 && curr->next != nullptr) {
            curr = curr->next;
            count++;
        }

        ListNode *temp = curr->next;

        curr->next = temp->next;

        free(temp);
        ptrList->size--;
    }

}

void TraverseList(LinkedList *ptrList, void (*ptrFun)(ListData)){

    ListNode *curr = ptrList->head;

    while(curr!= nullptr){

        (*ptrFun)(curr->data);
        curr = curr->next;
    }
}

int IsEmptyList(LinkedList *ptrList){

    return ptrList->size == 0;
}

int IsFullList(LinkedList *){
    return  0;
}

int ListSize(LinkedList *ptrList){
    return ptrList->size;
}

void ClearList(LinkedList *ptrList){

    ListNode *curr = ptrList->head;

    while(curr!= nullptr){

        curr = curr->next;
        free(ptrList->head);
        ptrList->head = curr;
        ptrList->size--;
    }
}

void SortList(LinkedList*ptrList, int (*ptrFun)(ListData, ListData)){

    ListNode  *outter;
    ListNode  *inner;

    for(outter =ptrList->head; outter->next!= nullptr; outter=outter->next){

        for(inner =outter->next; inner->next!= nullptr; inner=inner->next){
            if(ptrFun(outter->data,inner->data) > 0){
                ListData temp = outter->data;
                outter->data = inner->data;
                inner->data =temp;
            }
        }
    }

}
