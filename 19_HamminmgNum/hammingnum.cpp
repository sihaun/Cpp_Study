#include <iostream>
#include <cmath> 
#include <algorithm> 
using namespace std;

const int MAX_I = 28, MAX_J = 18, MAX_K = 12;
const int ALL = MAX_I * MAX_J * MAX_K;


void hammingnum(int*);

int main(void) {
    int t, h;
    cin >> t;
    int *num = new int[ALL];
    hammingnum(num);
    while (t--) {
        cin >> h;
        cout << num[h - 1] << endl;
    }
    delete[] num; 
    return 0;
}
void hammingnum(int *n) {

    int i = 0, j = 0, k = 0;

    n[0] = 1;

    for (int index = 1; index < ALL; ++index) {

        n[index] = min(min(2 * n[i], 3 * n[j]), 5 * n[k]);

        if (n[index] == 2 * n[i]) ++i;
        if (n[index] == 3 * n[j]) ++j;
        if (n[index] == 5 * n[k]) ++k;
    }
}
