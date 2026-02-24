// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "clsDbLinkedList.h";
#include "clsMyQueue.h";
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


}

