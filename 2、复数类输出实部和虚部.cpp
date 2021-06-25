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
private:
	double re, ig;
};




//StudybarCommentBegin
int main()
{
	Cmycomplex  z1(2, 3), z2, z3(3);
	cout << z1.GetReal() << "\n";
	cout << z2.GetImaginary() << "\n";
	cout << z3.GetReal() << "\n";

}
//StudybarCommentEnd