#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (n % 5 == 0) {
			if (k % 5 == 0) cout << n / 5 - k / 5;
			else cout << n / 5 - k / 5 - 1;
		}
		else {
			if (k % 5 == 0) cout << n / 5 + 1 - k / 5;
			else cout << n / 5 - k / 5;
		}
		cout << endl;
	}
}
