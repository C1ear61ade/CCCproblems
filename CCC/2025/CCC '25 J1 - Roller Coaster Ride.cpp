#include <bits/stdc++.h>
using namespace std;
int n;
int c;
int p;
int main() {
    cin >> n >> c >> p;
    int total = c*p;
    if (total >= n) {
        cout << "yes" << endl;
    }else {
        cout << "no" << endl;
    }
}