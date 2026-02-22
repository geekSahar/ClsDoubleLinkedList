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
    void InsertAtEnd( T v) {
        Noded* new_node = new Noded();
        new_node->value = v;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            return;
        }
        Noded* tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new_node;
        new_node->prev = tmp;
    };
    void DeleteNode( T v) {
        Noded* cur = head;
        Noded* pre = head;
        if (head == NULL) {
            return;
        }
        if (cur->value == v) {
            head = cur->next;
            delete cur;

        }
        while (cur->next != NULL && cur->value != v) {
            pre = cur;
            cur = cur->next;
        }
        if (cur != NULL) {
            pre->next = cur->next;
            cur->next->prev = pre;
            delete cur;
        }
    }

    void DeleteLastNode() {
        Noded* tmp = head;

        if (head == NULL)
            return;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }

        tmp->prev->next = NULL;
        delete tmp;


    }
    void DeleteFirstNode() {
        Noded* tmp = head;

        if (head == NULL)
            return;

        head = tmp->next;
        tmp->next->prev = NULL;
        delete tmp;


    }
    void printList() {
        Noded* tmp = head;
        while (tmp != NULL) {
            cout << tmp->value << " ";

            tmp = tmp->next;

        }
    }
};

