#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int shifts;
    int sum = 0;
    cin >> num >> shifts;

    for (int i = 0; i <= shifts; i++) {
        sum += num * pow(10, i);
    }

    cout << sum << endl;
}