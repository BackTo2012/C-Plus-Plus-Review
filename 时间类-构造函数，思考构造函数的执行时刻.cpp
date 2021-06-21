#include <iostream>
using namespace std;
class Cmytime
{
private:
	int hr, me, sd;
public:
	Cmytime(int h, int m, int s) {
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
	void AddOneSecond() {
		sd = sd + 1;
		if (sd >= 60)
		{
			int temp;
			temp = sd / 60;
			sd = sd - 60 * temp;
			me = me + temp;
		}
		if (me >= 60)
		{
			int temp;
			temp = me / 60;
			me = me - 60 * temp;
			hr = hr + temp;
		}
		if ( hr >= 24)
			hr = hr - 24;
	}
	int  AddNSeconds(int n) {
		int ext = hr / 24;
		sd = sd + n;
		if (sd >= 60)
		{
			int temp;
			temp = sd / 60;
			sd = sd - 60 * temp;
			me = me + temp;
		}
		if (me >= 60)
		{
			int temp;
			temp = me / 60;
			me = me - 60 * temp;
			hr = hr + temp;
		}

		int txe = hr / 24;
		int result = txe - ext;
		return result;
	}
};
//StudybarCommentBegin
int main(void) {
	int h, m, s;
	cin >> h >> m >> s;

	Cmytime t1(3, 2, 1);
	t1.Show();
	cout << "\n";
	t1.Set(h, m, s);
	t1.Show();

	return 0;
}

//StudybarCommentEnd