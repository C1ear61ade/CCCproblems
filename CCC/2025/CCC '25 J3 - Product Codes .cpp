//
// Created by ryans on 3/27/2026.
//
#include <bits/stdc++.h>
using namespace std;
string input;
int sum = 0;
int main() {
    cin >> input;
    for ( char c: input ) {
        if (isupper(c)) {
            cout << c;
        }
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    cout << sum << endl;
}