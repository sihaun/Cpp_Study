#include <iostream>
using namespace std;
int main(void) {
	int t, k, mid;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> k;
		mid = int(k / 2);
		for (int r = 0; r < k; ++r) {
			for (int c = 0; c < k; ++c) {
				if (r == mid && c == mid) {
					cout << 'O';		
				}
				else if (r == mid){
					cout << '+';
				}
				else if (c == mid) {
					cout << 'I';
				}
				else if(c+r == k-1){
					cout << '*';
				}
				else {
					cout << '.';
				}
			}
			cout << endl;
		}
	}
	return 0;
}