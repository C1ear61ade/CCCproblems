#include <bits/stdc++.h>
using namespace std;
string direction;
string streetName;
string turnDirection;

int main() {
    vector <string> streetList;
    vector <string> directionList  = {"f"} ;
    while (true) {
        cin >> direction >> streetName;

        if (streetName != "SCHOOL") {
            streetList.push_back (streetName);
        }
        directionList.push_back (direction);

        if (streetName == "SCHOOL") {

            for (int i = directionList.size() - 1; i >= 0; i--) {
                if (directionList[i] == "R") {
                    if (i != 0) {
                        cout << "Turn LEFT onto " << streetList[streetList.size() - (directionList.size() - i)] << " street" << endl;
                    } else {
                        cout << "Turn LEFT into your HOME" << endl;
                    }
                } else if (directionList[i] == "L") {
                    if (i != 0) {
                        cout << "Turn RIGHT onto " << streetList[streetList.size() - (directionList.size() - i)] << " street" << endl;
                    } else {
                        cout << "Turn RIGHT into your HOME" << endl;
                    }
                }
            }
            break;
        }
    }
}