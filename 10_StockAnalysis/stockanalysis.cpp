#include <iostream>
using namespace std;
int main(void) {
    int t, n, data1, data2;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cin >> data1;
        bool can = false;
        int p{ 0 };
        for (int j = 0; j < n-1; ++j) {
            cin >> data2;
            if (data1 == data2) continue;
            else if (data1 < data2) can = true;
            else {
                if (can) ++p;
                can = false;
            }
            data1 = data2;
        }
        cout << p << endl;
    }
}