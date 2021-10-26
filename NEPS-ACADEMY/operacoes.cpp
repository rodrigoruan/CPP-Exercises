#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string a;
	double b, c;
	cin >> a >> b >> c;
	
	if(a == "M") {
		cout << fixed << setprecision(2) << b * c << endl;
	} else {
		cout << fixed << setprecision(2) << b / c << endl;	
	}
}