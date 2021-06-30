//StudybarCommentBegin
#include <iostream>
#include <cstring> // strcpy and strcat prototypes
using namespace std;


class String
{
public:
	String( const char * = "" ); // 输出"Conversion (and default) constructor: "
	String( const String & ); //输出 "Copy constructor: "
	~String(); // 输出"Destructor: "

	bool operator==( const String & ) const; // test s1 == s2
	operator  char*() { return this->sPtr; }; //转换函数
	friend ostream &operator<<( ostream &out, const String &t );

private:
	int length; // string length (not counting null terminator)
	char *sPtr; // pointer to start of pointer-based string
};
//StudybarCommentEnd
String::String ( const char *ptr) {
	length = 0;
	while (ptr[length] != '\0') {
		length++;
	}
	sPtr = new char[length + 1];
	int i = 0;
	while (ptr[i] != '\0') {
		sPtr[i] = ptr[i];
		i++;
	}
	sPtr[i] = ptr[i];
	cout << "Conversion (and default) constructor: " << sPtr << endl;
};
String::String( const String &a ) {
	cout << "Copy constructor: " << a.sPtr << endl;
	length = a.length;
	sPtr = new char[a.length];
	for (int i = 0; i < length; i++) {
		sPtr[i] = a.sPtr[i];
	}
	sPtr[length] = '\0';
};
String::~String() {
	cout << "Destructor: " << sPtr << endl;
	if (sPtr != NULL)
	{
		delete[] sPtr;
	}
};
bool String::operator==( const String & ptr) const {
	if (strcmp(sPtr, ptr.sPtr))
		return false;
	else
		return true;
};
ostream &operator<<( ostream &out, const String &t ) {
	out << t.sPtr << endl;
	return out;
};
//StudybarCommentBegin
int main()
{
	char msg[1000];
	cin >> msg;
	String a("This"), b(" is "), c(msg);
	cout << a << b << c << endl;
	String A(a), B, C(c);
	cout << A << B << C << endl;
	cout << "A==a is " << (A == a ) << endl << "A==c is " << (A == c) << endl;
}
//StudybarCommentEnd