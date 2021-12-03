#include <bits/stdc++.h>

using namespace std;

int findIndex(char letter, string alp) {
  int idx = 0;
  for(int i = 0; i < alp.size(); i++) {
    if(alp[i] == letter) idx = i;
  }
  return idx;
}

int main() {
  int n; cin >> n;
  string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for(int i = 0; i < n; i ++) {
    string a;
    int b; cin >> a >> b;
    string response = "";

    for(char letter : a) {
      response += alp[findIndex(letter, alp) - b];
    }

    cout << response << "\n";
  }
}