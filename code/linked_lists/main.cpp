#include <iostream>
#include "list.h"
#include <list>


using std::cin;
using std::cout;
using std::endl;


void PrintListData(ListData d){

    cout<<"List Data:"<<d.value<<" : "<<d.text<<endl;
}

int CompareByValue(ListData d1, ListData d2){

    if (d1.value > d2.value){
        return 1;
    }
    return  -1;
}

int main() {
    /* Self Practice
     *  (1) review the LIST ADT operations and find logical errors (if any)
     *  (2) improve the insert at and delete at functions
     *  Identify the pre and post conditions of the list functions before you use them
     */

    return 0;
}

