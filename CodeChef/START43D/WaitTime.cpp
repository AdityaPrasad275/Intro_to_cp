#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << 7 * a - b;
		cout << endl;
	}
}
