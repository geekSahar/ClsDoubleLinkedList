#pragma once
#include <iostream>
#include "clsDbLinkedList.h";
using namespace std;
template<class T>
class clsMyQueue
{
protected:

	clsDbLinkedList<int> _list;
public:
	void Push(T n) {
		
		_list.InsertAtEnd(n);
}
	int Size() {
		return _list.Size();
	}
	T Front() {
	
		return _list.GetItem(0);
	}
	T back() {

		return _list.GetItem(Size()-1);
	}
	void Pop() {
		_list.DeleteFirstNode();
	}
	bool IsEmpty() {
		return _list.IsEmpty();
	}
	void Print() {
		_list.PrintList();
	}
};




