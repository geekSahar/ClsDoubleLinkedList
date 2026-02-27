#pragma once
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
		
		return (_n != 0);
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

