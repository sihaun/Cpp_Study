#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, a, b;
        int um{ 0 }, sol{ 0 }, index{ 0 };
        cin >> n >> a >> b;
        for (double con = n + 0.3; 0 < int(con); con -= 0.5) {
            if (um % 4 == 0) {
                for (int x = 0; x < int(con); ++x) {
                    ++sol, ++index;
                    if (a - 1 < index && index < b + 1) cout << sol << " ";
                }
            }
            else if (um % 4 == 1) {
                for (int x = 0; x < int(con); ++x) {
                    sol += n, ++index;
                    if (a - 1 < index && index < b + 1) cout << sol << " ";
                }
            }
            else if (um % 4 == 2) {
                for (int x = 0; x < int(con); ++x) {
                    --sol, ++index;
                    if (a - 1 < index && index < b + 1) cout << sol << " ";
                }
            }
            else {
                for (int x = 0; x < int(con); ++x) {
                    sol -= n, ++index;
                    if (a - 1 < index && index < b + 1) cout << sol << " ";
                }
            }
            ++um;
        }
        cout << endl;
    }
    return 0;
}