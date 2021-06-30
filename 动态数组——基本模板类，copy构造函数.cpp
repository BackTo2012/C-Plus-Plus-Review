#include <iostream>
using namespace std;

template <typename T>
class DynamicArray {
private:
	T* array; //pointer  ，一个T类型的指针
	unsigned int mallocSize; //分配空间的大小。
public:
//Constructors
// cout<<endl<< "new T["<<this->mallocSize<<"] malloc "<< this->mallocSize << "*"<<sizeof(T)<<"="<<this->mallocSize *sizeof(T)<<" bytes memory in heap";
	DynamicArray(unsigned length, const T &content) {
		array = new T [length];
		mallocSize = length;
		for (int i = 0; i < mallocSize; i++) {
			array[i] = content;
		}
		cout << endl << "new T[" << this->mallocSize << "] malloc " << this->mallocSize << "*" << sizeof(T) << "=" << this->mallocSize *sizeof(T) << " bytes memory in heap";
	}; // mallocSize=length; 设置每个元素的初始内容是 content；
	~DynamicArray() {
		cout << endl << "delete[] array free " << this->mallocSize << "*" << sizeof(T) << "=" << this->mallocSize *sizeof(T) << " bytes memory in heap";
	};
//return the this->mallocSize
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
	// this->mallocSize = a.capacity();
	// this->array = new T[a.capacity()];
	// for (int i = a.capacity(); i-- > 0;) {
	// 	this->array[i] = a[i];
	// }
};
//StudybarCommentBegin
int main()
{
	int length, i;
	cin >> length;

	DynamicArray<int> iarray(length, -1);

	DynamicArray<int> iarray2(iarray);

	cout << endl;
	for (i = 0; i < length; i++) {
		cout << iarray[i] << " ";
		iarray[i] = i * 1.1;
	}
	cout << endl;
	for (i = 0; i < length; i++) {
		cout << iarray2[i] << " ";
	}

	return 0;
}
//StudybarCommentEnd