#include <iostream>
using namespace std;
template <typename T>
T abs(T d)
{
	return d < 0 ? -d : d;
}


int main()
{
	int n = -5;
	double d = -5.5;
	cout << abs(n) << endl;
	cout << abs(d) << endl;
	return 0;
}