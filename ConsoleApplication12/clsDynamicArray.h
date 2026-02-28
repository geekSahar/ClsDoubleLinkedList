#pragma once
#include <iostream>
using namespace std;
template<class T>
class clsDynamicArray
{
T* arr;
int _n;
public:
	clsDynamicArray(int size) {
		_n = size;
		arr = new T[_n];
	}
	clsDynamicArray() {
		_n = 0;
		arr = nullptr;
	}
	bool SetItem(int i,T value) {
		if (i > _n || _n < 0)
			return false;
		arr[i] = value;
		return true;
	}
	int Size() {
		return _n;
	}
	bool IsEmty() {
		
		return (_n == 0?true:false);
	}
	void Resize(int newsize) {
		if (newsize < 0) {
			newsize = 0;
		}
		T* arrtmp = new T[newsize];
		
		if (newsize < _n) {
			_n = newsize;
		}
		for (int i = 0; i < _n; i++) {
			arrtmp[i] = arr[i];
		}
	 _n=newsize;
	 delete[] arr;
	 arr = arrtmp;


	}
	T GetItem(int i) {
		return arr[i];
	}
	void Reverse() {
		T tmp ;
		int j = _n - 1;
		for (int i = 0; i < _n / 2; i++) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			j--;
		}
	}
	void DeleteItemAt(int j) {
		if (_n < j || j<0) {
			return;
		}
		for (int l = j; l < _n-1; l++) {
					arr[l] = arr[l+1];
					
				}
			_n--;
	}
	void DeleteFirstItem() {
		DeleteItemAt(0);
	}
	void DeleteLastItem() {
		DeleteItemAt(_n-1);
	}
	void DeleteItem(T n) {
		int i = Find( n);
		if (i != -1) {
			DeleteItemAt(i);
		}
	}

	int  Find(T n){ 
		for (int i = 0; i < _n ; i++) {
			if (arr[i] == n)
				return i;
		}
		return -1;
	}
	void InsertAt(int j, T n) {
		if (j<0 || j>_n)
			return;
		int size = _n + 1;
	T* arrtmp = new T[size];
	int l=0;
	for (int i = 0; i < _n; i++) {
		
		if (i == j) {

			arrtmp[l++] = n;
			
		}
			arrtmp[l++] = arr[i];
			
	}
	if (j == _n) 
		arrtmp[_n] = n;
	
		delete[] arr;
		_n = size;
		arr = arrtmp;

	}
	void  InsertAtBegenning(T n ) {
		InsertAt(0, n);

	}
	void InsertBefore(int i,T n){
		if (i < 1) {
			InsertAt(0, n);
		}
		else {
			InsertAt(i - 1, n);
		}
	}
	void InsertAfter(int i, T n) {
		if (i >=_n) {
			InsertAt(_n-1,n);
		}
		else {
			InsertAt(i + 1, n);
		}
	}
	void  InsertAtEnd(T n) {
		InsertAt(_n, n);

	}
	void Clear() {
		if (arr != nullptr) {
			delete[] arr;
			arr = NULL;
		}
		_n = 0;
	}
	void PrintList() {
		for (int i = 0; i < _n; i++) {
			cout << arr[i]<<" ";
		}
		cout << "\n";
	}
	~clsDynamicArray() {
		delete[] arr;
	}
};

