#include <iostream>
using namespace std;
class Cmytime
{
private:
	int hr, me, sd;
public:
	void Set(int h, int m, int s) {
		if (0 <= h && h <= 23 && 0 <= m && s <= 60)
		{
			if (m >= 60)
			{
				int temp;
				temp = m / 60;
				m = m - 60 * temp;
				h = h + temp;
			}
			if ( h >= 24)
				h = h - 24;
			hr = h, me = m, sd = s;
		}

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
	t1.Set(1, 2, 3);
	t1.Set(h, m, s);
	t1.Show();
	return 0;
}

//StudybarCommentEnd