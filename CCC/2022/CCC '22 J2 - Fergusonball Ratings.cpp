/*
 * Name: CCC '22 J2 - Fergusonball Ratings
 * Author: C1ear61ade
 * Date: 3/25/2026
*/

#include <bits/stdc++.h>
using namespace std;

int numPlayers;
int points;
int fouls;
int stars;
int counts = 0;
int main() {
    cin >> numPlayers;
    for (int i = 0; i < numPlayers; i++) {
        cin >> points >> fouls;
        stars   = points*5-fouls*3;
        if (stars > 40) {
            counts++;
        }
    }
    if (counts == numPlayers) {
        cout << counts << "+" << endl;
    } else {
        cout << counts << endl;
    }

    return 0;
}