//
// Created by ryans on 3/30/2026.
//
#include <bits/stdc++.h>
using namespace std;
int m;
int n;

int main() {
    int count = 0;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j == 10) {
                count += 1;
            }
        }
    }
    if (count == 1) {
        cout << "There is 1 way to get the sum 10." << endl;
    } else if (count > 1) {
        cout << "There are " << count << " ways to get the sum 10." << endl;
    } else {
        cout << "There are 0 ways to get the sum 10." << endl;
    }
}