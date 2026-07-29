//
// Created by Ryan on 3/25/2026.
//
#include <bits/stdc++.h>
using namespace std;
int a;
string yesterday, today;

int main() {
    cin >> a;
    cin >> yesterday >> today;
    int count = 0;

        for (int i = 0; i < a; i++){
            if (yesterday[i] == 'C' && today[i] == 'C'){
                count++;
            }
        }
    cout << count << endl;

    return 0;
}