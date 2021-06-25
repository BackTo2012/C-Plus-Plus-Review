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
	double GetReal() {
		return re;
	}
	double GetImaginary() {
		return ig;
	}
	// void Add(Cmycomplex &z) {
	// 	re = re + z.re, ig = ig + z.ig;
	// }
	Cmycomplex Add(Cmycomplex &z) {
		Cmycomplex T;
		T.re = re + z.re, T.ig = ig + z.ig;
		return T;
	}
private:
	double re, ig;
};





//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(2, 3), z2, z3(3);
	z2 = z1.Add(z3);
	z2.Show();

}
//StudybarCommentEnd