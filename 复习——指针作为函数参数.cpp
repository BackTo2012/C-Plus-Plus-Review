//StudybarCommentBegin
#include <iostream>
using namespace std;
void swap(int *, int *);
int main( )
{
	int i, j;
	cin >> i >> j ;
	swap(&i, &j);
	cout << i << " " << j << endl;
	return 0;
}
//StudybarCommentEnd
void swap(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}