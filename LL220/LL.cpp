#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Node.hpp"
#include "LL.hpp"

LL::LL() {
    first = NULL;
    last = NULL;
    currsize = 0;
}

void LL::push(int x) {
    //This function takes an integer as a parameter and creates a new Node that holds that integer.

    Node *node = new Node(x);
    if (first == NULL) {
        first = node;
        last = node;
        currsize = 1;
    }
    else {
        last->next = node;
        last = node;
        currsize += 1;
    }
}

void LL::removekth(int i) {
    // this method starts at the first node in the list and counts to i-1. It then deletes the //node at location i. Note that
    //you must make node at i-1 point to node at i+1, and you //must decrease the size of the list. If you are deleting the
    //0th element, you must first //set first to the node at 2 before deleting node 1. Equally, if you are deleting the last
    //node, you must make the new last node be the node at i-1.
    //You must delete your node at i.
    if (currsize == 0) {
        cout << "The Linked List is Empty" << endl;
        return;
    }
    if (i >= currsize) {
        cout << "Index out of range" << endl;
        return;
    }
    Node *tmp = first;
    if (i == 0 && currsize == 1) {
        delete first;
        first = NULL;
        last = NULL;
        currsize = 0;
        return;
    }
    else if (i == 0) {
        first = first->next;
        delete tmp;
        currsize--;
        return;
    }
    for (int j = 0; j < i - 1; j++) {
        tmp = tmp->next;
    }
    Node *tmpDelete = tmp->next;
    tmp->next = tmp->next->next;
    delete tmpDelete;
    currsize--;
    if (i == currsize && tmp->next != NULL) {
        last = tmp->next;
    }
    else if (i == currsize && tmp->next == NULL) {
        last = tmp;
    }
}

void LL::printList() {
    
    Node *node = first;
    while (node) {
        node->printNode();
        node = node->next;
    }
    cout << endl;
}
