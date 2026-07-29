#include <iostream>
using namespace std;

int main() {
    long long index;
    string word = "GOAMPLITUDE";
    cin >> index;
    size_t pos = ((index - 1) % word.size() + word.size()) % word.size();
    cout << word[pos] << endl;
    return 0;
}