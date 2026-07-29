#include <bits/stdc++.h>
using namespace std;

int main() {
    int people;
    int hatNumber;
    int count = 0;
    cin >> people;

    std::vector<int> hatNum(people);

    for (int i = 0; i < people; i++) {
        cin >> hatNumber;
        hatNum.push_back(hatNumber);
    }

    for (int i = 1; i <= people; i++) {
        if (hatNum[i - 1] == hatNum[i - 1 + people/2]) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}