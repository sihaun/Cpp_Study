#include <iostream>
using namespace std;
const int GREGORIAN = 1582;

int main(void){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int year, month, day;
        cin >> year >> month >> day;
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int totalDays = 0;
        for (int y = GREGORIAN; y < year; y++) {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
                totalDays += 366;
            else
                totalDays += 365;
        }
        for (int m = 1; m < month; m++) {
            totalDays += daysInMonth[m - 1];
            if (m == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
                totalDays += 1;
        }
        totalDays += day - 1;
        int dayOfWeek = (totalDays + 5) % 7; // 1582년 1월 1일은 금요일, 0부터 시작하므로 금요일은 5
        switch (dayOfWeek) {
            case 0: cout << "Sunday\n"; break;
            case 1: cout << "Monday\n"; break;
            case 2: cout << "Tuesday\n"; break;
            case 3: cout << "Wednesday\n"; break;
            case 4: cout << "Thursday\n"; break;
            case 5: cout << "Friday\n"; break;
            case 6: cout << "Saturday\n"; break;
        }
    }

}
