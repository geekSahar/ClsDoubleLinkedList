// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include "clsMyQueue.h"
#include "clsMyStack.h"
using namespace std;
int main()
{
	
	clsDbLinkedList<int> Mydblinkedlist;
	if (Mydblinkedlist.IsEmpty()) {
		cout << "\nList is empty";
	}
	else{
		cout << "\nList isn't empty";
	}
	Mydblinkedlist.InsertAtBeginning(5);
	Mydblinkedlist.InsertAtBeginning(4);
	Mydblinkedlist.InsertAtBeginning(3);
	Mydblinkedlist.InsertAtBeginning(2);
	Mydblinkedlist.InsertAtBeginning(1);
	
	cout << "\nNumber of items: " << Mydblinkedlist.Size();
	if (Mydblinkedlist.IsEmpty()) {
		cout << "\nList is empty";
	}
	else {
		cout << "\nList isn't empty";
	}
	
	cout << "\nNumber of items: " << Mydblinkedlist.Size();
	clsDbLinkedList<int>::Noded* N1 = Mydblinkedlist.GetNode(2);

	Mydblinkedlist.UpdateItem(3,300);
	cout << "\nAfter updating: ";
	Mydblinkedlist.PrintList();

	Mydblinkedlist.InsertAfter(2, 200);
	cout << "\nAfter inserting: ";
	Mydblinkedlist.PrintList();
	Mydblinkedlist.Reverse();
	cout << "\nAfter reversing: ";
	Mydblinkedlist.PrintList();
	cout << "\nLinked List: ";
	Mydblinkedlist.PrintList();
	clsDbLinkedList<int>::Noded * N4 = Mydblinkedlist.Find(2);
	if (N4 != NULL){
		cout << "\nNode is found";
	}
	else{
		cout << "\nNode Isn't found";
	}

	cout << "\n----------------------------------------------------------\n";
	clsMyQueue<int> MyQueue;
	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);
	cout << "\nQueue: ";
	MyQueue.Print();
	cout << "\nQueue size: " << MyQueue.Size();
	cout << "\nQueue front: " << MyQueue.Front();
	cout << "\nQueue back: " << MyQueue.back();
	MyQueue.Pop();
	cout << "\nAfter pop: ";
	MyQueue.Print();
	cout << "\nItem(2): " << MyQueue.GetItem(2);
	MyQueue.Reverse();
	cout << "\nAfter revrsing: ";
	MyQueue.Print();
	MyQueue.UpdateItem(2, 200);
	cout << "\nAfter Updating: ";
	MyQueue.Print();
	MyQueue.InsertAfter(3, 90);
	cout << "\nAfter inserting: ";
	MyQueue.Print();
	MyQueue.InsertAtFront(97);
	cout << "\nAfter inserting at front: ";
	MyQueue.Print();
	MyQueue.InsertAtBack(500);
	cout << "\nAfter inserting at back: ";
	MyQueue.Print();
	MyQueue.Clear();
	cout << "\nAfter clear: ";
	MyQueue.Print();
	cout << "\n-----------------------------------------------------------------------------\n";
	clsMyStack<int> MyStack;
	MyStack.Push(10);
	MyStack.Push(20);

	MyStack.Push(30);
	MyStack.Push(40);
	MyStack.Push(50);
	MyStack.Print();
	cout << "\nStack size: " << MyStack.Size();
	cout << "\nStack top: " << MyStack.Top();
	cout << "\nStack bottom: " << MyStack.Bottom();
	MyStack.Pop();
	cout << "\nAfter pop: ";
	MyStack.Print();
	cout << "\nItem(2): " << MyStack.GetItem(2);
	MyStack.Reverse();
	cout << "\nAfter revrsing: ";
	MyStack.Print();
	MyStack.UpdateItem(2, 100);
	cout << "\nAfter Updating: ";
	MyStack.Print();
	MyStack.InsertAfter(3, 68);
	cout << "\nAfter inserting: ";
	MyStack.Print();
	MyStack.InsertAtFront(604);
	cout << "\nAfter inserting at front: ";
	MyStack.Print();
	MyStack.InsertAtBack(300);
	cout << "\nAfter inserting at back: ";
	MyStack.Print();
	MyStack.Clear();
	cout << "\nAfter clear: ";
	MyStack.Print();

}

