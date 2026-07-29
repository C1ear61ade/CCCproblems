/*
* Name: CCC '09 J4 - Signage
* By: C1ear61ade
* Date: 3/29/2026
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int wordLength;
int sum = 0;
bool running = true;
vector<int> arr1(6);
string a = "WELCOME";
string b = "TO";
string c = "CCC";
string d = "GOOD";
string e = "LUCK";
string f = "TODAY";
int main() {
    arr1[0] = (int)a.length();
    arr1[1] = (int)b.length();
    arr1[2] = (int)c.length();
    arr1[3] = (int)d.length();
    arr1[4] = (int)e.length();
    arr1[5] = (int)f.length();
    cin >> wordLength;

    for (int x : arr1) {
        sum += x;
        if (sum >= wordLength) {
            break;
        }
    }


}