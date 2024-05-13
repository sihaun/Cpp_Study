#include <iostream>
using namespace std;
int main(void) {
	int t, n, g;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		int a{ 0 }, b{ 0 }, c{ 0 }, d{ 0 }, f{ 0 };
		for (int x = 0; x < n; ++x) {
			cin >> g;
			g /= 10;
			if (g >= 9) ++a;
			else if (g >= 8) ++b;
			else if (g >= 7) ++c;
			else if (g >= 6) ++d;
			else ++f;
		}
		cout << a << ' ' << b  << ' ' << c << ' ' << d << ' ' << f << endl;
	}
	return 0;
}