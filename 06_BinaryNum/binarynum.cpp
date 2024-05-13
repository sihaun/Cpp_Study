#include <iostream>
using namespace std;
int main(void) {
	int t;
	unsigned int n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int o{ 0 }, z{ 0 };
		cin >> n;
		do {
			if (n % 2) ++o;
			else ++z;
			n /= 2;
		} while (n);
		cout << z << ' ' << o << endl;
	}
	return 0;
}

