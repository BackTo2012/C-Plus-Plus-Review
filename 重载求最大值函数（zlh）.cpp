#include <iostream>
using namespace std;

int maxinum(int a, int b, int c)
{
	int temp = a;
	if (temp < b)
		temp = b;
	if (temp < c)
		temp = c;
	return temp;
}
char maxinum(char a, char b, char c)
{
	char temp = a;
	if (temp < b)
		temp = b;
	if (temp < c)
		temp = c;
	return temp;
}
float maxinum(float a, float b, float c)
{
	float temp = a;
	if (temp < b)
		temp = b;
	if (temp < c)
		temp = c;
	return temp;
}




//StudybarCommentBegin
int main()
{
	int b1, b2, b3;
	float c1, c2, c3;
	char a1, a2, a3;
	cin >> b1 >> b2 >> b3 >> c1 >> c2 >> c3 >> a1 >> a2 >> a3;
	cout << maxinum(b1, b2, b3) << ' ' << maxinum(c1, c2, c3) << ' ' << maxinum(a1, a2, a3);
	return 0;
}
//StudybarCommentEnd