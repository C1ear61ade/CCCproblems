#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    int eventCount;
    cin >> count;
    cin >> eventCount;
    for (int i = 0; i < eventCount; i++) {
        char event;
        int eventNum;
        cin >> event;
        cin >> eventNum;
        if (event == '+') {
            count += eventNum;
        } else if (event == '-') {
            count -= eventNum;
        }
    }
    cout << count << endl;
}