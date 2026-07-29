#include <bits/stdc++.h>
using namespace std;

int questionNum;
int main () {
    int count = 0;

    cin >> questionNum;
    vector<pair<char,char>> arr(questionNum);

    for (int i = 0; i < questionNum; i++) {
        cin >> arr[i].first;
    }
    for (int i = 0; i < questionNum; i++) {
        cin >> arr[i].second;
    }
    for (int i = 0; i < questionNum; i++) {
        if (arr[i].first == arr[i].second) {
            count += 1;
        }
    }
    cout << count << endl;
}