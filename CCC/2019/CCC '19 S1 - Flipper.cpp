#include <bits/stdc++.h>
using namespace std;

string directions;
int a = 1, b = 2, c = 3, d = 4;
int main() {
    cin >> directions;
    for (int i = 0; i < directions.length(); i++) {
        if (directions[i] == 'H') {
            a = c;
            b = d;
            c = a;
            d = b;
        } else if (directions[i] == 'V') {
            a = b;
            b = a;
            c = d;
            d = c;
        }
    }

    cout << a << " " << b << endl << c << " " << d << endl;
}