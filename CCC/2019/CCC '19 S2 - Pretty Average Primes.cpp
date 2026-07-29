#include <bits/stdc++.h>
using namespace std;

int input;
int number;

bool primeFinder(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> input;
    vector <pair<int, int>> arr1;

    for (int i = 1; i <= input; i++) {
        cin >> number;
        for (int j = 2; j <= number; j++) {
            if (primeFinder(j)) {
                if (primeFinder(2*number-j)) {
                    arr1.push_back({j, 2*number-j});
                    break;
                }
            }
        }
    }

    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i].first << " " << arr1[i].second << endl;
    }
}