#include <bits/stdc++.h>
using namespace std;

int parkingAmount;
int lightNum;
int lightQuestions;
int parkingPos;

int main () {
    cin >> parkingAmount;
    cin >> lightNum;
    cin >> lightQuestions;

    vector<int> arr1(parkingAmount + 2, 0);

    // Mark intervals
    for (int i = 0; i < lightNum; i++) {
        int p , r;
        cin >> p >> r;
        int a = max(1, p - r);
        int b = min(parkingAmount, p+r);

        arr1[a]++;
        arr1[b + 1]--;
    }
    // Prefix sum:
    for (int i = 1; i <= parkingAmount; i++) {
        arr1[i] += arr1[i - 1];
    }

    for (int i = 0; i < lightQuestions; i++) {
        cin >> parkingPos;

        if (arr1[parkingPos] > 0) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}