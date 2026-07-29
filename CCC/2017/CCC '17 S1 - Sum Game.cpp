#include <bits/stdc++.h>
using namespace std;
int a;
int b;
int numberOfInput;
int main() {

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    vector <int> swifts(numberOfInput);
    vector <int> semaphores(numberOfInput);

    cin >> numberOfInput;

    for (int i = 0; i < numberOfInput; i++) {
        cin >> a;
        swifts.push_back(a);
    }
    for (int i = 0; i < numberOfInput; i++) {
        cin >> b;
        semaphores.push_back(b);
    }

    for (int i = numberOfInput - 1; i >= 0; i--) {
        int swiftSum = accumulate(swifts.begin(), swifts.begin() + i + 1, 0);
        int semaphoreSum = accumulate(semaphores.begin(), semaphores.begin() + i + 1, 0);

        if (swiftSum == semaphoreSum) {
            swifts.resize(i + 1);
            cout << swifts.size() << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}