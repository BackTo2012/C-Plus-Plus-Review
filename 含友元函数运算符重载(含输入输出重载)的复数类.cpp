//StudybarCommentBegin
#include <iostream>
#include <iomanip>
#include <string>
//StudybarCommentEnd

using namespace std;
class ComplexNumber
{
public:
	ComplexNumber(double a = 0, double b = 0) {
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
	ComplexNumber operator+(ComplexNumber &z) {
		ComplexNumber T;
		T.re = re + z.re, T.ig = ig + z.ig;
		return T;
	}
	ComplexNumber operator-(ComplexNumber &z) {
		ComplexNumber T;
		T.re = re - z.re, T.ig = ig - z.ig;
		return T;
	}
	ComplexNumber operator*(ComplexNumber &z) {
		ComplexNumber T;
		T.re = re * z.re - ig * z.ig;
		T.ig = re * z.ig + z.re * ig;
		return T;
	}
	ComplexNumber operator/(ComplexNumber &z) {
		ComplexNumber T;
		T.re = (re * z.re + ig * z.ig) / ((z.re) * (z.re) + (z.ig) * (z.ig));
		T.ig = (ig * z.re - re * z.ig) / ((z.re) * (z.re) + (z.ig) * (z.ig));
		return T;
	}
	friend istream& (istream &in, ComplexNumber&z);
	friend ostream& (ostream &out, ComplexNumber&z);
private:
	double re, ig;
};









//StudybarCommentBegin
void CN() { //ComplexNumber
	ComplexNumber cn1, cn2;
	std::cin >> cn1 >> cn2;
	std::cout << cn1 + cn2 << std::endl;
	std::cout << cn1 - cn2 << std::endl;
	std::cout << cn1*cn2 << std::endl;
	std::cout << cn1 / cn2 << std::endl;
}
int main(void) {
	CN();
	return 0;
}
//StudybarCommentEnd