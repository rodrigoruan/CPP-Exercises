#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int r1 = 0, r2 = 0;
    for(int i = 0; i < arr.size(); i += 1) {
        r1 += arr[i][i];
        r2 += arr[i][arr[i].size() - (i+1)];
    }
    return abs(r2 - r1);
}