#include <bits/stdc++.h>
using namespace std;
int temperature;
int main () {
    cin >> temperature;
    int pressure = 5 * temperature - 400;
    cout << pressure << endl;
    if (pressure < 100) cout << "1" << endl;
    else if (pressure == 100) cout << "0" << endl;
    else cout << "-1" << endl;
}