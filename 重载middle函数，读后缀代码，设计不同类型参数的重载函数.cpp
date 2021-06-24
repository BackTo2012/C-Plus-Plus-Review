//StudybarCommentBegin
#include<iostream>
using namespace std;


//StudybarCommentEnd

template<typename T>
T middle(T a[3])
{
	T temp = a[0];
	if (a[0] < a[1] && a[1] < a[2])
	{
		temp = a[1];
		return temp;
	}
	else if (a[0] < a[2] && a[2] < a[1])
	{
		temp = a[2];
		return temp;
	}
	else if (a[1] < a[2] && a[2] < a[0])
	{
		temp = a[2];
		return temp;
	}
	else if (a[1] < a[0] && a[0] < a[2])
	{
		temp = a[0];
		return temp;
	}
	else if (a[2] < a[0] && a[0] < a[1])
	{
		temp = a[0];
		return temp;
	}
	else if (a[2] < a[1] && a[1] < a[0])
	{
		temp = a[1];
		return temp;
	}
	return 0;
}


//StudybarCommentBegin
int main()
{
	int iNumber[3] = {45, 3, 89};
	double dNumber[3] = {12.4, 6, 55.8};
	unsigned uNumber[3] = {345, 776, 565};

	cout << "\nThe numbers are ";
	for ( int i = 0; i < 3; i++)
		cout << iNumber[i] << "\t";
	cout << endl << "the middle of them is " << middle(iNumber) << endl;

	cout << "\nThe numbers are ";
	for ( int i = 0; i < 3; i++)
		cout << dNumber[i] << "\t";
	cout << endl << "the middle of them is " << middle(dNumber) << endl;

	cout << "\nThe numbers are ";
	for ( int i = 0; i < 3; i++)
		cout << uNumber[i] << "\t";
	cout << endl << "the middle of them is " << middle(uNumber) << endl;

	return 0;
}
//StudybarCommentEnd