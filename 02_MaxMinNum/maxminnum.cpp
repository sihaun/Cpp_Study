// �־��� ������ �ִ� �ּ� ���ϱ�
// ���δ��б� ����Ʈ�����к� 2�г� ������
#include <iostream>
using namespace std;
int main(void) {
	int numTestCases;
	cin >> numTestCases;
	for (int i = 0; i < numTestCases; ++i) {
		int numData, data;
		int min, max;
		cin >> numData;
		cin >> data;
		max = min = data;
		for (int j = 1; j < numData; ++j) {
			cin >> data;
			if (data < min) min = data;
			if (data > max) max = data;
		}
		cout << max << " " << min << endl;
	}
	return 0;
}