#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, ant=0, dan=0;
  string b;

  cin >> a >> b;

  for(int i = 0; i < a; i ++) {
    if(b[i] == 'A') ant++;
    if(b[i] == 'D') dan++;
  }

  if(ant == dan) {
    cout << "Friendship" << "\n";
  } else if(ant > dan) {
    cout << "Anton" << "\n";
  } else {
    cout << "Danik" << "\n";
  }
}