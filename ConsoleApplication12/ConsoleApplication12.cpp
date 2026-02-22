// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDbLinkedList.h";
using namespace std;
int main()
{
	clsDbLinkedList<int> Mydblinkedlist;
	Mydblinkedlist.InsertAtBeginning(5);
	Mydblinkedlist.InsertAtBeginning(4);
	Mydblinkedlist.InsertAtBeginning(3);
	Mydblinkedlist.InsertAtBeginning(2);
	Mydblinkedlist.InsertAtBeginning(1);


	cout << "Linked List: ";
	Mydblinkedlist.printList();
	clsDbLinkedList<int>::Noded * N1 = Mydblinkedlist.Find(2);
	if (N1 != NULL){
		cout << "\nNode is found";
	}
	else{
		cout << "\nNode Isn't found";
	}
	Mydblinkedlist.InsertAfter(N1, 80);
	cout << "\nAfter inserting 80: ";
	Mydblinkedlist.printList();
	Mydblinkedlist.InsertAtEnd(40);
	cout << "\nAfter inserting 40 at end: ";
	Mydblinkedlist.printList();
	clsDbLinkedList<int>::Noded* N2 = Mydblinkedlist.Find(5);
	Mydblinkedlist.DeleteNode(5);
	cout << "\nAfter deleting 5 : ";
	Mydblinkedlist.printList();
	Mydblinkedlist.DeleteFirstNode();
	cout << "\nAfter deleting First Node  : ";
	Mydblinkedlist.printList();
	Mydblinkedlist.DeleteLastNode();
	cout << "\nAfter deleting Last Node  : ";
	Mydblinkedlist.printList();
}
