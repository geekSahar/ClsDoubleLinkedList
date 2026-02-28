// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


#include "clsMyQueueArr.h"
using namespace std;
int main()
{
	clsMyQueueArr<int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);
	MyQueue.Print();
	cout << "\nQueue Size:" << MyQueue.Size()<<endl;
	cout << "\nIsEmpty :" << MyQueue.IsEmpty()<<endl;
	cout << "\nQueue Front:" << MyQueue.Front() << endl;
	cout << "\nQueue Back :" << MyQueue.Back() << endl;
	 MyQueue.Pop();
	 cout << "\nQueue after pop :";
		MyQueue.Print();
		cout << "\n Item(3) :" << MyQueue.GetItem(3) << endl;
		MyQueue.Reverse();
		cout << "\nQueue after reverse :";
		MyQueue.Print();
		MyQueue.UpdateItem(2,330);
		cout << "\nQueue after updating:";
		MyQueue.Print();
		MyQueue.InsertAfter(3, 670);
		cout << "\nQueue after inserting after item(3) :";
		MyQueue.Print();
		MyQueue.InsertAtFront(870);
		cout << "\nQueue after inserting at front :";
		MyQueue.Print();
		MyQueue.InsertAtBack(900);
		cout << "\nQueue after inserting at back :";
		MyQueue.Print();
		MyQueue.Clear();
		cout << "\nQueue after  clear :";
		MyQueue.Print();
	/*MyDynamicArray.DeleteFirstItem();
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	cout << "\nArray after deleting first item : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.DeleteLastItem();
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	cout << "\nArray after deleting last item : " ;
	MyDynamicArray.PrintList();
	int ind = MyDynamicArray.Find(30);
	if (ind == -1) {
		cout << "\nItem isn't found";
	}
	else {
		cout << "\nItem is found at index:" << ind;
	}
	MyDynamicArray.DeleteItem(20);
	cout << "\nArray after deleting 20 : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.InsertAt(1,300);
	cout << "\nArray after inserting : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.InsertAtBegenning(600);
	cout << "\nArray after insert 600 at begenning : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.InsertBefore(2,260);
	cout << "\nArray after insert 260 before index 2 : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.InsertAfter(3, 700);
	cout << "\nArray after insert 700 after index 3 : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.InsertAtEnd(800);
	cout << "\nArray after insert 800 at end : ";
	MyDynamicArray.PrintList();
	/*MyDynamicArray.Resize(2);
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList()
	MyDynamicArray.Resize(10);
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();
	cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << endl;
	MyDynamicArray.Reverse();
	MyDynamicArray.PrintList();
	MyDynamicArray.Clear();
	MyDynamicArray.PrintList();
	*/

};

