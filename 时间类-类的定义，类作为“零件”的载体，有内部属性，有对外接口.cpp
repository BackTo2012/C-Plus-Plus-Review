#include <iostream>
using namespace std;
class Cmytime
{
private:
	int hr, me, sd;
public:
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
	Cmytime t1;
	t1.Set(h, m, s);
	t1.Show();
	return 0;
}

//StudybarCommentEnd