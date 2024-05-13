#include <iostream>
using namespace std;
int main(void) {
	int numTestCases;
	short int numdata;
	unsigned int data;
	cin >> numTestCases;
	for (int i = 0; i < numTestCases; ++i) {
		unsigned short int onedigitnum{ 1 };
		cin >> numdata;
		for (int j = 0; j < numdata; ++j) {
			cin >> data;	
			onedigitnum *= data % 10;
			onedigitnum %= 10;			 
		}
		cout << onedigitnum << endl;
	}
	return 0;
} 