#include <bits/stdc++.h>
using namespace std;

long long start;
long long endPad;
long long Bigjump;
int type;

int main() {
    cin >> start >> endPad >> Bigjump >> type;

    long long D = endPad - start;
    long long k = floor((long double)D / Bigjump);

    long long pos1 = start + k * Bigjump;
    long long pos2 = start + (k + 1) * Bigjump;

    long long steps1 = abs(k) + abs(endPad - pos1);
    long long steps2 = abs(k + 1) + abs(endPad - pos2);

    if (type == 1) {
        cout << min(steps1, steps2) << endl;
    } else {
        cout << max(steps1, steps2) << endl;
    }
}