#pragma once
#include <iostream>
#include "clsMyQueueArr.h";
using namespace std;
template<class T>
class clsMystackArr:public clsMyQueueArr<T>
{
	public:
	void Push(T v) {
		clsMyQueueArr<T>::_list.InsertAtBegenning(v);
	}
	T Top() {
		return  	clsMyQueueArr<T>::Front();
	}
	T Bottom() {
		return  	clsMyQueueArr<T>::Back();
	}
};

