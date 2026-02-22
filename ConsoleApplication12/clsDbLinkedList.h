#pragma once
#include <iostream>
using namespace std;
template<class T>
class clsDbLinkedList
{
   
public:
  
   class Noded {
    public:
        T value;
        Noded* next;
        Noded* prev;
    };
   Noded* head=NULL;
    void InsertAtBeginning(T v) {
        Noded* new_node = new Noded();
        new_node->value = v;
        new_node->next = head;
        new_node->prev = NULL;
        if (head != NULL)
            head->prev = new_node;
        head = new_node;

    }
 
    Noded* Find( T v) {
        Noded* tmp = head;
        while (tmp != NULL) {
            if (tmp->value == v)
                return tmp;
            tmp= tmp->next;
        }
        return NULL;
    }
    void InsertAfter( Noded* N, T v) {
        if (N == NULL) {
            return;
        }
        Noded* new_node = new Noded();
        new_node->value = v;
        new_node->next = N->next;
        new_node->prev = N;


        if (N->next != NULL) {
            N->next->prev = new_node;
        }

        N->next = new_node;

    }
    void printList() {
        Noded* tmp = head;
        while (tmp != NULL) {
            cout << tmp->value << " ";

            tmp = tmp->next;

        }
    }
};

