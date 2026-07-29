#include <bits/stdc++.h>
using namespace std;

int x;
int a;
int b;

int main(){

    cin >> x;
    vector<pair<int,int>> arr(x);

    for (int i = 0; i < x; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end());
    set<int> aSet;
    double maxspeed = 0;
    vector<pair<int,int>> arr2(x);
    for (int i = 0; i < x-1; i++) {
        int T1 = arr[i].first;
        int X1 = arr[i].second;
        int T2 = arr[i+1].first;
        int X2 = arr[i+1].second;
        double speed = (double)abs(X2 - X1) / abs(T2 - T1);
        maxspeed = max(maxspeed, speed);
    }
    cout << maxspeed;

    return 0;
}