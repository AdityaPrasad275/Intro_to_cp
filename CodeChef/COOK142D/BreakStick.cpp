#include<iostream>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int t, x, n;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		if (n % 2 == 1 && x % 2 == 0) cout << "no";
		else cout << "yes";
		cout << "\n";
	}
}
