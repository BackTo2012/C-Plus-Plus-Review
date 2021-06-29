#include <iostream>
using namespace std;
class Cmycomplex
{
public:
	Cmycomplex(double a = 0, double b = 0) {
		re = a, ig = b;
	}
	void Show() {
		cout << "(" << re << "+" << ig << "i)";
	}
	void Set(double a = 0, double b = 0) {
		re = a, ig = b;
	}
	Cmycomplex operator+(Cmycomplex &z) {
		Cmycomplex T;
		T.re = re + z.re, T.ig = ig + z.ig;
		return T;
	}
	double re, ig;
};
//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(2, 3), z2, z3(3);
	z2 = z1 + z3;
	z2.Show();
	double  x, y;
	cin >> x >> y;
	z2.Set(x, y);
	z3 = z1 + z2;
	cout << "\n";
	z3.Show();


}
//StudybarCommentEnd