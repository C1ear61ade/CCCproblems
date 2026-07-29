#include <bits/stdc++.h>
using namespace std;
int numInput, bid;
string name;
int main() {
    string finalname = "";
    int bids = 0;
    cin >> numInput;
    for (int i = 0; i < numInput; i++) {
        cin >> name >> bid;
        if (bid > bids) {
            bids = bid;
            finalname = name;
        }
    }
    cout << finalname << endl;
}