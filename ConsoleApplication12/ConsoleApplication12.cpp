// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


#include "clsMystackArr.h"
using namespace std;
int main()
{
	clsMystackArr<int> MyStack;

	MyStack.Push(10);
	MyStack.Push(20);
	MyStack.Push(30);
	MyStack.Push(40);
	MyStack.Push(50);
	MyStack.Print();
	cout << "\Stack Size:" << MyStack.Size() << endl;
	cout << "\nIsEmpty :" << MyStack.IsEmpty() << endl;
	cout << "\Stack Front:" << MyStack.Front() << endl;
	cout << "\Stack Back :" << MyStack.Back() << endl;
	MyStack.Pop();
	cout << "\Stack after pop :";
	MyStack.Print();
	cout << "\n Item(2) :" << MyStack.GetItem(2) << endl;
	MyStack.Reverse();
	cout << "\Stack after reverse :";
	MyStack.Print();
	MyStack.UpdateItem(2, 444);
	cout << "\Stack after updating:";
	MyStack.Print();
	MyStack.InsertAfter(3, 550);
	cout << "\Stack after inserting after item(3) :";
	MyStack.Print();
	MyStack.InsertAtFront(960);
	cout << "\Stack after inserting at front :";
	MyStack.Print();
	MyStack.InsertAtBack(900);
	cout << "\Stack after inserting at back :";
	MyStack.Print();
	MyStack.Clear();
	cout << "\Stack after  clear :";
	MyStack.Print();
};

