#include <bits/stdc++.h>

using namespace std;

int main() {
  char l;
  cin >> l;

  string t;
  cin.ignore();
  getline(cin, t);
  
  vector<string> arr = {};

  string word;

  for(int i = 0; i <= t.size(); i++) {
    if(t[i] == ' ' || i == t.size()) {
      arr.push_back(word);
      word = "";
    } 
    else {
      word += t[i];
    }
  }

  int res = 0;

  for(string c : arr) if(count(c.begin(), c.end(), l)) res++;

  cout << fixed << setprecision(1) << (100.0 / arr.size()) * res << "\n";
}