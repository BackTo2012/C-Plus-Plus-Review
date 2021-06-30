#include <iostream>
using namespace std;

template <typename T>
class DynamicArray {
private:
	T* array; //pointer  ，一个T类型的指针
	unsigned int mallocSize; //分配空间的大小。
public:
	DynamicArray(unsigned length, const T &content) {
		array = new T [length];
		mallocSize = length;
		for (unsigned int i = 0; i < mallocSize; i++) {
			array[i] = content;
		}
		cout << endl << "new T[" << this->mallocSize << "] malloc " << this->mallocSize << "*" << sizeof(T) << "=" << this->mallocSize *sizeof(T) << " bytes memory in heap";
	};
	~DynamicArray() {
		cout << endl << "delete[] array free " << this->mallocSize << "*" << sizeof(T) << "=" << this->mallocSize *sizeof(T) << " bytes memory in heap";
	};
	unsigned int capacity() const {
		return this->mallocSize;
	};
	T& operator[](unsigned int i) {
		return array[i];
	};
	T& operator[]  (unsigned int i ) const {
		return array[i];
	};
	DynamicArray(const DynamicArray<T> & DA ) {
		cout << endl << "Copy Constructor is called";
		mallocSize = DA.mallocSize;
		array = new T [DA.mallocSize];
		for (int i = 0; i < mallocSize; i++)
			array[i] = DA.array[i];
	} ;
	DynamicArray<T> & operator= (const DynamicArray<T> & anotherDA ) {
		cout << endl << "operator = is called";
		if (this == &anotherDA)
			return *this;
		else
		{
			mallocSize = anotherDA.mallocSize;
			array = new T [mallocSize];
			for (int i = 0; i < anotherDA.mallocSize; i++)
				array[i] = anotherDA.array[i];
			return *this;
		}
	} ;
};

//StudybarCommentBegin

int main()
{
	int length, i;
	cin >> length;

	DynamicArray<int> iarray(length, -1);

	DynamicArray<int> iarray2(iarray), iarray3(iarray2);

	cout << endl;
	for (i = 0; i < length; i++) {
		cout << iarray3[i] << " ";
		iarray[i] = i * 1.1;
	}
	iarray3 = iarray2 = iarray;
	cout << endl;
	for (i = 0; i < length; i++) {
		cout << iarray3[i] << " ";
	}

	return 0;
}
//StudybarCommentEnd
