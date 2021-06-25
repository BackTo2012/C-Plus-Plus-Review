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
	Cmycomplex operator-(Cmycomplex &z) {
		Cmycomplex T;
		T.re = re - z.re, T.ig = ig - z.ig;
		return T;
	}
	Cmycomplex operator*(Cmycomplex &z) {
		Cmycomplex T;
		T.re = re * z.re - ig * z.ig;
		T.ig = re * z.ig + z.re * ig;
		return T;
	}
	double re, ig;
};



//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(3, 4), z2(7), z3;
	double  x, y;
	cin >> x >> y;
	z2.Set(x, y);
	z3 = z1 + z2;
	cout << "\n";
	z3.Show();
	z3 = z1 - z2;
	cout << "\n";
	z3.Show();
	z3 = z1 * z2;
	cout << "\n";
	z3.Show();

}
//StudybarCommentEnd