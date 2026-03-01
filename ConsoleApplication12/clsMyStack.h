#pragma once
#include <iostream>
#include "clsDbLinkedList.h";
template<class T>
class clsMyStack
{
protected:

	clsDbLinkedList<T> _list;
public:
	void Push(T n) {

		_list.InsertAtBeginning(n);
	}
	void Print() {
		_list.PrintList();
	}
	int Size() {
		return _list.Size();
	}
	T Top() {

		return _list.GetItem(0);
	}

	T Bottom() {

		return _list.GetItem(Size() - 1);
	}
	void Pop() {
		_list.DeleteFirstNode();
	}
	T GetItem(T n) {
		return _list.GetItem(n);
	}
	void Reverse() {
		_list.Reverse();
	}
	
	void UpdateItem(int i, T n) {
		_list.UpdateItem(i, n);
	}
	void InsertAtFront(T v) {
		_list.InsertAtBeginning(v);
	}
	bool InsertAfter(int i, T v) {
		return _list.InsertAfter(i, v);
	}
	void InsertAtBack(T v) {
		_list.InsertAtEnd(v);
	}
	void Clear() {
		_list.Clear();
	}
};



