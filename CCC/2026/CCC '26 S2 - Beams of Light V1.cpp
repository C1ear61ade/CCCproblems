#include <bits/stdc++.h>
using namespace std;

int parkingAmount;
int lightNum;
int lightQuestions;
int parkingPos;

int main () {
    cin >> parkingAmount;
    cin >> lightNum;
    cin >> lightQuestions;

    vector<pair<int,int>> arr1(lightNum);

    for (int i = 0; i < lightNum; i++) {
        cin >> arr1[i].first >> arr1[i].second;
    }

    //Parking Lot and Light logic:
    for (int c = 0; c < lightQuestions; c++) {
        cin >> parkingPos;

        bool status = false;

        for (int i = 0; i < lightNum; i++) {
            int a = arr1[i].first + arr1[i].second;
            int b = arr1[i].first - arr1[i].second;

            if (parkingPos >= b && parkingPos <= a) {
                status = true;
                break;
            }
        }

        if (status) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}