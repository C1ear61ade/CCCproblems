#include <bits/stdc++.h>
using namespace std;
int rounds;
int antonia;
int david;
int aPoint = 100;
int dPoint = 100;
int main(){
    cin >> rounds;

    for(int i = 0; i < rounds; i++) {
        cin >> antonia >> david;
        if (antonia > david) {
            dPoint -= antonia;
        } else if (antonia < david) {
            aPoint -= david;
        }
    }

    cout << aPoint << endl << dPoint << endl;
}