// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"
using namespace std;
int main()
{
	clsDynamicArray<int> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);
	MyDynamicArray.PrintList();
	cout << "\nArray Size:" << MyDynamicArray.Size()<<endl;
	cout << "\nIsEmpty :" << MyDynamicArray.IsEmty()<<endl;
	
	
	MyDynamicArray.DeleteFirstItem();
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	cout << "\nArray after deleting first item : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.DeleteLastItem();
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	cout << "\nArray after deleting last item : " ;
	MyDynamicArray.PrintList();
	/*MyDynamicArray.Resize(2);
	cout << "\nArray Size:" << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();
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

