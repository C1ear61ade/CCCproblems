#include <bits/stdc++.h>
using namespace std;
string input;
string plaintext;
int index;
int main() {
    cin >> input;
    cin >> index;
    for (int i = 0; i < input.length(); i++) {
        char letter = input[i];

        i++;
        int totalNum = 0;
        while (i < input.length() && isdigit(input[i])) {
            totalNum = totalNum * 10 + (input[i] - '0');
            i++;
        }
        i--;

        for (int j = 0; j < totalNum; j++) {
            plaintext += letter;
        }
    }
    if (plaintext.length() > index) {
        cout << plaintext[plaintext.length() % index];
    }
}