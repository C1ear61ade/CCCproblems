#include <bits/stdc++.h>
using namespace std;

std::string input;

int main() {
    std::unordered_map<std::string, std::string> hashmap = {
        {"CU", "see you"},
        {":-)", "I'm happy"},
        {":-(", "I'm unhappy"},
        {";-)", "wink"},
        {":-P", "stick out my tongue"},
        {"(~.~)", "sleepy"},
        {"TA", "totally awesome"},
        {"CCC", "Canadian Computing Competition"},
        {"CUZ", "because"},
        {"TY", "thank-you"},
        {"YW", "you're welcome"},
        {"TTYL", "talk to you later"},
    };

    while (true) {
        cin >> input;

        if (hashmap.contains(input)) {
            cout << hashmap[input] << endl;

            if (input == "TTYL") {
                break;
            }

        } else {
            cout << input << endl;
        }
    }

    return 0;
}