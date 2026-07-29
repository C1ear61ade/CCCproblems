#include <bits/stdc++.h>
using namespace std;

string name;
string Newname;
int age;

int main() {

    std::unordered_map<std::string, int> hashmap;

    while (true) {
        cin >> name;

        if (hashmap.find(name) != hashmap.end()) {
            cout << name << " already exists" << endl;
            cout << "Age: " << hashmap.find(name) -> second << endl;

        } else {
            char answer;
            cout << name << " does not exist" << endl;
            cout << "Register here (Y/N):";
            cin >> answer;

            if (answer == 'Y' || answer == 'y') {
                cout << "Name: ";
                cin >> Newname;
                cout << "Age: ";
                cin >> age;
                hashmap[Newname] = age;

            } else if (answer == 'N' || answer == 'n') {
                break;
            }

        }
    }
    return 0;
}