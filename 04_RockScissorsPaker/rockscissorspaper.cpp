#include <iostream>
using namespace std;
int main(void) {
	unsigned int numTestCases;
	short int numdata, data;
	cin >> numTestCases;
	for (int i = 0; i < numTestCases; ++i) {
		int rock{ 0 }, scis{ 0 }, paper{ 0 };
		cin >> numdata;
		for (int j = 0; j < numdata; ++j) {
			cin >> data;
			if (data == 1) ++scis;
			else if (data == 2) ++rock;
			else ++paper;
		}
		if (scis == 0 && rock > 0 && paper > 0) cout << paper << endl;
		else if (rock == 0 && scis > 0 && paper > 0) cout << scis << endl;
		else if (paper == 0 && rock > 0 && scis > 0) cout << rock << endl;
		else cout << 0 << endl;
	}
	return 0;
}