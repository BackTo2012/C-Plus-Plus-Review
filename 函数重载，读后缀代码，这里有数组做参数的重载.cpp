#include<iostream>
using namespace std;

int myadd(int a, int b)
{
	return a + b;
}

int myadd(int a, int b, int c)
{
	return a + b + c;
}

int myadd(int  a[20], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += a[i];
	};
	return total;
}

//StudybarCommentBegin
main()
{
	int a[20], n, i;

	cin >> n;
	if (n == 2)
		cout << myadd(5, 3);
	else if (n == 3)
		cout << myadd(5, 3, 9);
	else if (n > 3)
	{
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		cout << myadd(a, n);
	}

}
//StudybarCommentEnd