// �־��� ������ �� ���ϱ�
// ���δ��б� ����Ʈ�����к� 2�г� ������
#include <iostream>
using namespace std;
int main(void) {
	int numTestCases;
	cin >> numTestCases;
	for (int i = 0; i < numTestCases; ++i) {
		short int numData, data;
		int sum{0};
		cin >> numData;
		for (int j = 0; j < numData; j++) {
			cin >> data;
			sum += data;
		}
		cout << sum << endl;
	}
	return 0;
}