#include <iostream>
using namespace std;
class Cmycomplex
{
public:
	Cmycomplex(int a = 0, int b = 0) {
		re = a, ig = b;
	}
	void Show() {
		cout << "(" << re << "+" << ig << "i)";
	}
private:
	int re, ig;
};

//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(2, 3), z2, z3(3);
	z1.Show();
}
//StudybarCommentEnd