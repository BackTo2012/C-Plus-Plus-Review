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
	bool operator==(Cmycomplex &z) {
		if (re == z.re && ig == z.ig)
			return true;
		else
			return false;
	}
	bool operator!=(Cmycomplex &z) {
		if (re == z.re && ig == z.ig)
			return false;
		else
			return true;
	}
private:
	double re, ig;
};










//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(3, 4), z2(7), z3;
	double  x, y;
	cin >> x >> y;
	z1.Set(x, y);
	cin >> x >> y;
	z2.Set(x, y);

	if (z1 == z2)
		cout << "y\n";
	else
		cout << "n\n";
	if (z1 != z2)
		cout << "y\n";
	else
		cout << "n\n";

}
//StudybarCommentEnd