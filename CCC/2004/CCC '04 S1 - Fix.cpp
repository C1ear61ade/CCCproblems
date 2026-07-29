#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
int number;
string word1;
string word2;
string word3;

bool comparator(string x, string y) {
    if (x.length() >= y.length()) {
        if (x.substr(0, y.length()) == y) {
            return true;
        }
        if (x.substr(x.length() - y.length()) == y) {
            return true;
        }

    } else if (x.length() <= y.length()) {
        if (y.substr(0, x.length()) == x) {
            return true;
        }
        if (y.substr(y.length() - x.length()) == x) {
            return true;
        }
    }
    return false;
}

int main() {

    cin >> number;

    for (int i = 1; i <= number; i++) {
        cin >> word1 >> word2 >> word3;
        if (comparator(word1, word2) || comparator(word2, word3) || comparator(word3, word1)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
}