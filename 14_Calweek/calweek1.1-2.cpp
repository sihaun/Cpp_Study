#include <iostream>
using namespace std;
const int GREGOREAN = 1582;
int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int year, month, day;
        int mday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int pday = 0;
        int pyear = GREGOREAN;
        cin >> year >> month >> day;
        for (; pyear < year; ++pyear) {
            if (pyear % 400 == 0 || (pyear % 100 != 0 && pyear % 4 == 0)) {
                pday += 1;
            }
            pday += 365;
        }
        for (int j = 0; j < month - 1; ++j) {
            if (j == 1 && (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))) {
                ++mday[1];
            }
            pday += mday[j];
        }
        pday += (day + 4);
        cout << pday % 7 << endl;

    }
}