#include <iostream>
using namespace std;
class date
{
private:
    int yr, mh, dy;
public:
    date(int y = 0, int m = 0, int d = 0) {
        yr = y, mh = m, dy = d;
    }
    int year() {
        return yr;
    }
    int month() {
        return mh;
    }
    int day() {
        return dy;
    }
    date &operator++() {
        dy++;
        return *this;
    }
    date operator+=(int d) {
        dy += d;
        return *this;
    }
    date operator-(date &z) {

    }
    date operator-=(int d) {
        dy -= d;
        return *this;
    }
    date operator++(int ) {
        date old = *this;
        if ((mh == 1 || mh == 3 || mh == 5 || mh == 7 || mh == 8 || mh == 10) && (dy == 31))
        {
            mh++;
            dy = 1;
        }
        else if ((mh == 4 || 6 || 9 || 11) && (dy == 30))
        {
            mh++;
            dy = 1;
        }
        else if ((mh == 2) && (dy == 28))
        {
            if (((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0)) //判断闰年
            {
                dy++;
            }
            else
            {
                mh++;
                dy = 1;
            }
        }
        else if ((mh == 2) && (dy == 29))
        {
            mh++;
            dy = 1;
        }
        else if ((mh == 12) && (dy == 31))
        {
            yr++;
            mh = 1;
            dy = 1;
        }
        else
        {
            dy++;
        }
        return old;
    }
};









//StudybarCommentBegin
int main(void) {
    using std::cin;
    using std::cout;
    using std::endl;
    date D1, D2;
    int year;
    int month;
    int day;
    cin >> year >> month >> day; //shu ru di yi ge ri qi
    D1 = date(year, month, day);
    cin >> year >> month >> day; //shu ru di er ge ri qi
    D2 = date(year, month, day);
    cout << D2 - D1 << endl;
    cin >> day; //shu ru yao jia jian de tian shu,
    D1 += day;
    D2 -= day;
    cout << D1.year() << " " << D1.month() << " " << D1.day() << endl;
    cout << D2.year() << " " << D2.month() << " " << D2.day() << endl;
    return 0;
}

//StudybarCommentEnd