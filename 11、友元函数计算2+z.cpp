#include <iostream>
#include <iomanip>
using namespace std;
class Cmycomplex
{
public:
	Cmycomplex(double a = 0, double b = 0) {
		re = a, ig = b;
	}
	void Show()
	{
		cout << setiosflags(ios::fixed);    //具体显示几位小数的设置

		if (ig < 0)
		{
			cout << "(" << setprecision(0) << re << setprecision(0) << ig << "i)";
		}
		else
		{
			cout << "(" << setprecision(0) << re << "+" << setprecision(0) << ig << "i)";
		}

	}
	void Set(double a = 0, double b = 0) {
		re = a, ig = b;
	}
	Cmycomplex operator+(Cmycomplex &z) {
		Cmycomplex T;
		T.re = re + z.re, T.ig = ig + z.ig;
		return T;
	}
	friend Cmycomplex operator+(double a, Cmycomplex &z);
	friend Cmycomplex operator+(Cmycomplex &z, double a);

private:
	double re, ig;
};

Cmycomplex operator+(double a, Cmycomplex &z) {
	Cmycomplex T;
	T.re = z.re + a;
	T.ig = z.ig;
	return T;
}
Cmycomplex operator+(Cmycomplex &z, double a) {
	Cmycomplex T;
	T.re = z.re + a;
	T.ig = z.ig;
	return T;
}
//StudybarCommentBegin
int main()
{
	Cmycomplex z1(3, 4), z2(7), z3, z4(z1);
	double x, y;
	cin >> x >> y;
	z3.Set(x, y);
	cout << endl;
	z3 = z3 + z2;
	z3.Show();
	z4 = 2 + z4;
	cout << endl;
	z4.Show();
	z4 = z4 + 2;
	cout << endl;
	z4.Show();

}
//StudybarCommentEnd