#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t) {
		cin >> n >> k;
		if (k == 0) {
			if (n % 4 == 1 || n % 4 == 2 || n % 4 == 3) cout << "On\n";
			else cout << "Off\n";
		}
		else if (k == 1 && n % 4 == 0) cout << "On\n";
		else cout << "Ambiguous\n";


		t--;
	}
	return 0;
}
