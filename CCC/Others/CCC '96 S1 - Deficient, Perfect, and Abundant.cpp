//
// Created by ryans on 3/30/2026.
//
#include <bits/stdc++.h>
using namespace std;
int number;
int numberNum;
int main() {
    cin >> number;
    for (int i = 0; i < numberNum; i++) {
        cin >> number;
        for (int i = 1; i <= number; i++) {
            int divisor = number%i;
            if (divisor == 0) {
                if (divisor + number/divisor == number) {
                    cout << number << " is a perfect number." << endl;
                } else if (divisor + number/divisor < number) {
                    cout << number << " is a deficient number." << endl;
                } else if (divisor + number/divisor > number) {
                    cout << number << " is an abundant number." << endl;
                }
            }
        }
    }
}