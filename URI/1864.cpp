#include <bits/stdc++.h>

using namespace std;

int main() {
  string sentence = "Life is not a problem to be solved, but a reality to be experienced.";

  int n; cin >> n;

  string res = "";

  for(int i =0 ; i < n; i ++ ) {
    if(isalpha(sentence[i])) res += toupper(sentence[i]);
    else res += sentence[i];
  }

  cout << res << "\n";
}