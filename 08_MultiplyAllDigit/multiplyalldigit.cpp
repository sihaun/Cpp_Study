#include <iostream>
using namespace std;
int main(void) {
	int t, r, apt;
	unsigned int n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		do {
			apt = 1;
			do {
				r = n % 10;
				if (!r) r = 1;
				apt *= r;
				n /= 10;
			} while (n > 0);
			n = apt;
		} while ((n / 10) > 0);
		cout << apt << endl;
	}
	return 0;
}