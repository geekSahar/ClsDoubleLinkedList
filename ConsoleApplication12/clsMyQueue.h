#pragma once
#include <iostream>
#include "clsDbLinkedList.h";
using namespace std;
template<class T>
class clsMyQueue
{
protected:

	clsDbLinkedList<T> _list;
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
	T GetItem(int n) {
		return _list.GetItem(n);
	}
	void InsertAtFront(T v) {
		_list.InsertAtBeginning(v);
	}
	void InsertAtBack(T v) {
		_list.InsertAtEnd(v);
	}
	void Clear() {
		_list.Clear();
	}
	void UpdateItem(int i, T n) {
		_list.UpdateItem(i, n);
	}
	bool InsertAfter(int i, T v) {
		return _list.InsertAfter(i, v);
	}
	void Reverse() {
		_list.Reverse();
	}
	bool IsEmpty() {
		return _list.IsEmpty();
	}
	void Print() {
		_list.PrintList();
	}
};




