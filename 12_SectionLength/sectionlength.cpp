#include <iostream>
using namespace std;
int main(void) {
	int t,x1,y1,x2,y2,a;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> x1 >> y1 >> x2 >> y2;
		int x[] = { x1,x2 };
		int y[] = { y1,y2 };
		if (x1 > x2) x[0] = x2, x[1] = x1;
		if (y1 > y2) y[0] = y2, y[1] = y1;
		a = y[0] - x[1];
		if (a < 0) a = 0;
		cout << a << " " << y1 - x1 + y2 - x2 - a << endl;
	}
}
