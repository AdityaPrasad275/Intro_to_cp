#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a < b) cout << a;
		else cout << b;
		cout << endl;
	}
}
