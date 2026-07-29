#include <bits/stdc++.h>
using namespace std;

int width, length;
int rectangleWidth, rectangleLength;

int main() {
    cin >> length >> width;
    vector<vector<bool>> grid(width,vector<bool>(length,true));
    cin >> rectangleWidth >> rectangleLength;
    for (int i = 0; i < rectangleWidth; i++) {
        for (int j = 0; j < rectangleLength; j++) {
            grid[i][j] = false;
        }
    }


}