#include <iostream>
#include <string>
using namespace std;
void CarrollAtm();
int main() {
    int t;
    cin >> t;
    while (t--) {
        CarrollAtm();
    }
}
void CarrollAtm() {
    int k;
    string s, n, f;
    cin >> n;
    if (n.length() <= 2) {
        cout << 0 << endl;
        return;
    }
    for (int i = n.length() - 1; i >= 2; --i) {
        k = n[i] - '0';
        f += to_string(k);
        s = n.substr(i - 2, 2);
        try {
            int num = stoi(s) - k;
            n = n.substr(0, i - 2) + to_string(num);
        } catch (const invalid_argument& e) {
            cout << 0 << endl;
            return;
        } catch (const out_of_range& e) {
            cout << 0 << endl;
            return;
        }
    }
    if (n[0] == n[1]) cout << string(f.rbegin(), f.rend()) << endl;
    else cout << 0 << endl;
}
