#include <bits/stdc++.h>
using namespace std;

int target;
int gPoint;
int sPoint;
int bPoint;
int total = 0;
int difference;
int medalCount;

int main() {
    cin >> target >> bPoint >> sPoint >> gPoint;
    total += 5*gPoint + bPoint + 3*sPoint;

    difference = target - total;
    medalCount = floor(difference/5);

    if (difference - medalCount == 1 || difference - medalCount == 2) {
        cout << medalCount + 1 << endl;
    } else {
        cout << medalCount << endl;
    }
}