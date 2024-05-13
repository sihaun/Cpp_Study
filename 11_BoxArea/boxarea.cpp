#include <iostream>
using namespace std;
int main(void) {
    int t, a1, b1, a2, b2, x1, y1, x2, y2;
    cin >> t;
    for (int k = 0; k < t; ++k) {
        bool n = false;
        cin >> a1 >> b1 >> a2 >> b2 >> x1 >> y1 >> x2 >> y2;
        if ((a2 < x1) or (x2 < a1) or (b2 < y1) or (y2 < b1)) n = true;
        int x[4] = { a1,a2,x1,x2 };
        int y[4] = { b1,b2,y1,y2 };
        int d;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (x[j] > x[j+1]) {
                    d = x[j];
                    x[j] = x[j+1];
                    x[j+1] = d;
                }
                if (y[j] > y[j+1]) {
                    d = y[j];
                    y[j] = y[j+1];
                    y[j+1] = d;
                }
            }
        }
        int s = (x[2] - x[1]) * (y[2] - y[1]);
        int l = 2 * ((x[2] - x[1]) + (y[2] - y[1]));
        if (n) {
            s = 0;
            l = 0;
        }
        cout << (a2 - a1) * (b2 - b1) + (x2 - x1) * (y2 - y1) - s << ' ' << 2 * (a2 - a1 + b2 - b1 + x2 - x1 + y2 - y1) - l << endl;
    }
}