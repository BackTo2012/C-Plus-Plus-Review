//StudybarCommentBegin
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setfill;
using std::setw;
//StudybarCommentEnd
class Time
{
private:
	int hour, minute, second;
public:
	Time(int h = 0, int m = 0, int s = 0) {
		hour = h, minute = m, second = s;
	}
	void setTime(int h = 0, int m = 0, int s = 0) {
		hour = h, minute = m, second = s;
	}
	void printTime();
	Time &operator++() {
		second++;
		return *this;
	}
	friend Time operator+(int d, Time&z);
};
void Time::printTime()
{
	if (second >= 60) {
		minute += second / 60;
		second = second % 60;
	}
	if (minute >= 60) {
		hour += minute / 60;
		minute = minute % 60;
	}
	if (hour >= 24) {
		hour = hour % 24;
	}
	cout << setfill('0') << setw(2) << hour
	     << ":" << setw(2) << minute << ":"
	     << setw(2) << second << endl;
}
Time operator+(int d, Time &z)
{
	Time old = z;
	old.second += d;
	return old;
}
//StudybarCommentBegin
int main()
{
	int hour, minute, second;
	int increase;
	Time t1(23, 45, 0), t2, t3(t1);
	cin >> hour >> minute >> second >> increase;
	t1.setTime(hour, minute, second);
	t1.printTime();
	t2 = ++t1;
	t2.printTime();
	t3 = increase + t1;
	t3.printTime();
	return 0;
}
//StudybarCommentEnd