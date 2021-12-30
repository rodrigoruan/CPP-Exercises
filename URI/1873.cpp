#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  map<string, int> obj = {
    {"tesoura papel", 1},
    {"papel pedra", 1},
    {"pedra lagarto", 1},
    {"lagarto spock", 1},
    {"spock tesoura", 1},
    {"tesoura lagarto", 1},
    {"lagarto papel", 1},
    {"papel spock", 1},
    {"spock pedra", 1},
    {"pedra tesoura", 1},
  };

  while(n--) {
    string a, b; cin >> a >> b;
    if(a == b) {
      cout << "empate" << "\n";
    } else if(obj[a + " " + b]) {
      cout << "rajesh" << "\n";
    } else {
      cout << "sheldon" << "\n";
    }
  }
}