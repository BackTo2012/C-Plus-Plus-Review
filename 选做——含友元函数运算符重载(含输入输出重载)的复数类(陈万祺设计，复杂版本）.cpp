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
	friend istream& operator>> (istream &in, ComplexNumber&z);
	friend ostream& operator<< (ostream &out, const ComplexNumber&z);
private:
	double re, ig;
};
istream & operator>> (istream &in, ComplexNumber &z) {
	string s;
	in >> s;
	int pos = s.find("+", 0);
	string sTmp = s.substr(0, pos); //分离出代表实部的字符串
	z.re = atof(sTmp.c_str());//atof库函数能将const char*指针指向的内容转换成 float
	sTmp = s.substr(pos + 1, s.length() - pos - 2); //分离出代表虚部的字符串
	z.ig = atof(sTmp.c_str());
	return in;
}
ostream & operator<< (ostream &out, const ComplexNumber &z) {
	out << setiosflags(ios::fixed);    //具体显示几位小数的设置
	if (z.ig == 0)
	{
		out << setprecision(0) << z.re << endl;
	}
	else
	{
		if (z.ig < 0)
			out << setprecision(2) << z.re  << setprecision(2) << z.ig << "i" << endl;
		else
			out << setprecision(2) << z.re << " + " << setprecision(2) << z.ig << "i" << endl;
	}
	return out;
}









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