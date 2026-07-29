#include <bits/stdc++.h>
using namespace std;
int numInput;
int dataNum;
int main() {
    vector <int> data;

    cin >> numInput;
    for (int i = 0; i < numInput; i++) {
        cin >> dataNum;
        data.push_back(dataNum);
    }

    sort(data.begin(), data.end());

    int mid = (data.size() + 1) / 2;

    vector<int> lowTide(data.begin(), data.begin() + mid);
    vector<int> highTide(data.begin() + mid, data.end());

    reverse(lowTide.begin(), lowTide.end());

    int i = 0;
    int j = 0;

    while (i < lowTide.size() || j < highTide.size()) {
        if (i < lowTide.size()) {
            cout << lowTide[i++] << " ";
        }
        if (j < highTide.size()) {
            cout << highTide[j++] << " ";
        }
    }
}