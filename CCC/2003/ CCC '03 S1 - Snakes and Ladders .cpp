#include <bits/stdc++.h>

using namespace std;

int diceNum;
int position = 1;

int main() {

    while (position != 100) {

        cin >> diceNum;

        if (diceNum == 0) {
            cout << "You Quit!" << endl;
            return 0;
        }

        if (position + diceNum <= 100) {
            position += diceNum;
        }

        if (position == 99) {
            position = 77;
        } else if (position == 90) {
            position = 48;
        } else if (position == 54) {
            position = 19;
        } else if (position == 9) {
            position = 34;
        } else if (position == 40) {
            position = 64;
        } else if (position == 67) {
            position = 86;
        }

        cout << "You are now on square " << position << endl;
    }

    cout << "You Win!" << endl;
    return 0;
}