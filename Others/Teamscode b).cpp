#include <bits/stdc++.h>
using namespace std;

int cases;
int numberOfFlowers;
int x;

int main() {
    cin >> cases;
    vector <int> answer(cases);

    for (int i = 0; i < cases; i++) {
        cin >> numberOfFlowers;
        vector <int> v(numberOfFlowers);
        for (int j = 0; j < numberOfFlowers; j++) {
            cin >> x;
            v.push_back(x);
        }
    }
}