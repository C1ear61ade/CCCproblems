#include <bits/stdc++.h>
using namespace std;
string word;
int main() {
    cout << "Ready" << endl;
    while (true) {
        getline(cin, word);
        if ((word[0] == 'p' && word[1] == 'q') || (word[0] == 'q' && word[1] == 'p')) {
            cout << "Mirrored pair" << endl;
        } else if ((word[0] == 'b' && word[1] == 'd') || (word[0] == 'd' && word[1] == 'b')) {
            cout << "Mirrored pair" << endl;
        } else if (word == "  ") {
            break;
        } else {
            cout << "Ordinary pair" << endl;
        }
    }

}
