#include <bits/stdc++.h>
using namespace std;
int t, s, h;

int main() {
    cin >> t >> s >> h;

    for (int i = 1; i <= t; i++) {
        cout << "*";
        for (int a = 1; a <= s; a++) cout << " ";
        cout << "*";
        for (int a = 1; a <= s; a++) cout << " ";
        cout << "*" << endl;
    }

    for (int i = 1; i <= 3 + 2*s ; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 1; i <= h; i++) {
        for (int a = 1; a <= s + 1; a++) cout << " ";
        cout << "*" << endl;
    }

    return 0;
}