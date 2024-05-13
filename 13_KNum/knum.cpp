#include <iostream>
using namespace std;
int power(int b, int e) {
	int r = 1;
	for (int i = 0; i < e; ++i) {
		r *= b;
	}
	return r;
}
int main(void) {
	int t, k, p, q, a{ 0 };
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> k;
		int n = 0;
		while(k > int(9 * power(10, n)*(n+1))){
			k -= int(9 * power(10, n)*(n+1));
			++n;
		}
		p = k / (n + 1);
		q = k % (n + 1);
		int f = power(10, n);
		for (int x = 0; x < p; ++x) ++f;
		if (q == 0) a = (f - 1) % 10;
		else for (int y = 0; y < n + 2 - q; ++y) a = f % 10, f /= 10;
		cout << a << endl;
	}
}