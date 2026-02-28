#pragma once
#include <iostream>
#include "clsDynamicArray.h";
using namespace std;
template<class T>
class clsMyQueueArr
{
protected:

	clsDynamicArray<T> _list;
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
	T Back() {

		return _list.GetItem(Size() - 1);
	}
	void Pop() {
		_list.DeleteFirstItem();
	}
	T GetItem(int n) {
		return _list.GetItem(n);
	}
	void InsertAtFront(T v) {
		_list.InsertAtBegenning(v);
	}
	void InsertAtBack(T v) {
		_list.InsertAtEnd(v);
	}
	void Clear() {
		_list.Clear();
	}
	void UpdateItem(int i, T n) {
		_list.SetItem(i, n);
	}
	void InsertAfter(int i, T v) {
		 _list.InsertAfter(i, v);
	}
	void Reverse() {
		_list.Reverse();
	}
	bool IsEmpty() {
		return _list.IsEmty();
	}
	void Print() {
		_list.PrintList();
	}
};



