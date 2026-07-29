#include <bits/stdc++.h>
using namespace std;

int a, b;
int c, d;

int main() {
    vector <int> v1;
    vector <int> v2;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> c;
        v1.push_back(c);
    }
    for (int i = 0; i < b; i++) {
        cin >> d;
        v2.push_back(d);
    }
    for (int j = 0; j < v2.size(); j++) {
        int count = 0;
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] >= v2[j]) {
                count++;
            }
        }
        cout << count << endl;
    }

}