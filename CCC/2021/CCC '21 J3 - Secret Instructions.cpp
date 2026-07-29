/*
 * Name: CCC '21 J3 - Secret Instructions
 * Author: C1ear61ade
 * Date: 3/25/2026
*/
#include <bits/stdc++.h>
using namespace std;
string input;
string direction = "";

int main() {
    while (true) {
        cin >> input;
        int number1 = input[0] - '0';
        int number2 = input[1] - '0';
        int sum = number1 + number2;

        if (input == to_string(99999)){
            break;
        }

        if (sum != 0){
            if (sum%2 == 0) {
                direction = "right ";

            } else if (sum%2 == 1) {
                direction = "left ";
            }
        }

        cout << direction << input.substr(2) << endl;
    }
    return 0;
}