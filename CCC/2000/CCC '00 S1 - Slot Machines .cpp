#include <bits/stdc++.h>
using namespace std;
int money;
int machine1;
int machine2;
int machine3;
int plays1 , plays2 , plays3;
int turn = 1;
int main() {
    cin >> money >> machine1 >> machine2 >> machine3;
    while (money > 0) {
        money --;
        if (turn == 1) {
            plays1 ++;
            if (plays1 == 35) {
                money += 30;
            }
            turn++;
        }
        money --;
        if (turn == 2) {
            plays2 ++;
            if (plays2 == 100) {
                money += 60;
            }
            turn++;
        }
        money --;
        if (turn == 3) {
            plays3 ++;
            if (plays3 == 10) {
                money += 9;
            }
            turn -= 2;
        }
    }

}