#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    if ((a > b && a < c) || (a > c && a < b)) {
        cout << a << endl;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }
}