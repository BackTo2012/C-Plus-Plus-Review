#include <iostream>
#include <cmath>
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
	Cmycomplex sqrt() {
		Cmycomplex T;
		T.ig = pow((ig) * (ig) / (1 - re), 1 / 4);
		T.re = ig / (2 * T.ig);
		if (T.re < 0)
		{
			T.re = -T.re, T.ig = -T.ig;
		}
		return T;
	}
	Cmycomplex operator*(Cmycomplex &z) {
		Cmycomplex T;
		T.re = re * z.re - ig * z.ig;
		T.ig = re * z.ig + z.re * ig;
		return T;
	}
private:
	double re, ig;
};
//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(3, 4), z2(-1), z3;
	double  x, y;
	cin >> x >> y;
	z1.Set(x, y);
	z3 = z1.sqrt();
	z3.Show();
	cout << "\n";
	z3 = z3 * z2;
	z3.Show();
}
//StudybarCommentEnd