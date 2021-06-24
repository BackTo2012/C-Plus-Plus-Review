#include <iostream>
using namespace std;
class Cmytime
{
private:
	int hr, me, sd;
public:
	Cmytime(int h = 0, int m = 0, int s = 0) {
		hr = h, me = m, sd = s;
	}
	void Set(int h, int m, int s) {
		hr = h, me = m, sd = s;
	}
	void Show() {
		cout << hr << ":" << me << ":" << sd;
	}
};


//StudybarCommentBegin
int main(void) {
	int h, m, s;
	cin >> h >> m >> s;
	Cmytime t1(3, 2, 1), t2, t3(5);
	t1.Show();
	cout << "\n";
	t1.Set(h, m, s);
	t1.Show();
	cout << "\n";
	t2.Show();
	cout << "\n";
	t3.Show();
	return 0;
}

//StudybarCommentEnd