#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s; cin >> s;

    if(regex_search(s, regex("13"))) {
        cout << s << " es de Mala Suerte" << "\n";
    } else {
        cout << s << " NO es de Mala Suerte" << "\n";
    }
}