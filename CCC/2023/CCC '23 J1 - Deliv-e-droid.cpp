/*
 * Name: CCC '23 J1 - Deliv-e-droid
 * Author: C1ear61ade
 * Date: 3/25/2026
*/

#include <bits/stdc++.h>
using namespace std;

int delivery;
int collision;
int points = 0;

int main() {
    cin >> delivery >> collision;
    if (delivery > collision) {
        cout << (points + delivery*50 - collision*10) + 500 << endl;
    } else {
        cout << (points + delivery*50 - collision*10) << endl;
    }
    return 0;
}

