#pragma once
#include <iostream>
using namespace std;
template<class T>
class clsDbLinkedList
{
protected:
    int _Size;
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
        _Size++;
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
        _Size++;
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
        _Size++;
    };
    Noded* GetNode(int n) {
        int i = 0;
       
        Noded* tmp = head;
        if (n<0 || head == NULL)
            return NULL;
        while ( i< n && tmp!=NULL) {
            i++;
            tmp = tmp->next;
        }
        return tmp;
    }
    void reverse() {
        int i = 0;
        if (head == NULL)
            return;
        Noded* tmp = head;
        while (tmp->next != NULL) {
         

            tmp = tmp->next;

        }
        int n = Size() ;
        Noded* cur= head;
        while ( i<n/2) {
            i++;
            int N = cur->value;
            cur->value = tmp->value;
            tmp->value =N;
            cur = cur->next;
            tmp = tmp->prev;
        }
    }

    bool InsertAfter(int i, T v) {
        Noded* N3 = GetNode(i);
        if (N3 != NULL) {
            InsertAfter(N3, v);
            return true;
        }
        else {
            return false;
        }

    }
    T GetItem(int n) {
       

        Noded* tmp = GetNode(n);
        if (tmp == NULL) {
            return NULL;
        }
        else {
            return tmp->value;
        }
    }
    void UpdateItem(int i, T n) {
        Noded* tmp= GetNode(i);
        if (tmp == NULL) {
            return ;
        }
        else {
            tmp->value=n;
        }
    
    }
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
        _Size--;
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
        _Size--;

    }

    void DeleteFirstNode() {
        Noded* tmp = head;

        if (head == NULL)
            return;

        head = tmp->next;
        if(head!=NULL)
        head->prev = NULL;
        delete tmp;
        _Size--;

    }
   int Size() {
      
        return _Size;
    }
   bool  IsEmpty() {
       return Size() == 0;
  
       
   }
   void Clear(){
       
       while (head!=NULL) {
           DeleteFirstNode();
           
       }
       return;
   }
    void printList() {
        Noded* tmp = head;
        while (tmp != NULL) {
            cout << tmp->value << " ";

            tmp = tmp->next;

        }
    }
};

