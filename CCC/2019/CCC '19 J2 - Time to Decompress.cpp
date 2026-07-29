#include <bits/stdc++.h>
using namespace std;

int num;
int num2;
char character;

int main() {
    cin >> num2;
    for (int i = 0; i < num2; i++) {
        cin >> num >> character;
        for (int j = 0; j < num; j++) {
            cout << character;
        }
    }

}