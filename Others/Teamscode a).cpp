#include <bits/stdc++.h>

using namespace std;
string n;

int main() {
    cin >> n;
    int secondNum = (n[1] - '0') * 10 + (n[0] - '0');

    if (n.size() == 1) {
        if (stoi(n)%9 == 0) {
            cout << stoi(n) << endl;
        } else {
            cout << "-1" << endl;
        }

    } else if (n.size() == 2) {
        if (secondNum%9 == 0) {
            cout << secondNum << endl;
        } else {
            cout << "-1" << endl;
        }
    } else if (stoi(n) == 100) {
        cout << "-1" << endl;
    }

    return 0;
}