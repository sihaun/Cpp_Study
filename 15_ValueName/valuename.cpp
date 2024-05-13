#include <iostream>
#include <string>
using namespace std;
string cans = ("_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
string cantcap = ("0123456789");
int main(void){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        bool canname = true;
        if (cantcap.find(s[0]) != -1) canname = false;
        for(int j=0;j<s.size() && canname;++j){
            if (cans.find(s[j]) == -1){
                canname = false;
                break;
            }
        }
        cout << int(canname) << endl;
    }
}
