#include <bits/stdc++.h>
using namespace std;

double V, P;

int main() {
    cin >> V >> P;
    double lower = V * (1 - P/100);
    double upper = V * (1 + P/100);
    cout << lower << endl << upper << endl;
    return 0;
}