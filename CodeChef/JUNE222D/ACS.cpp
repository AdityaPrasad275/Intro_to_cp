#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	long long int t, n, counter = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		counter += n / 100;
		n = n % 100;
		counter += n;
		if (counter > 10) cout << -1;
		else cout << counter;
		counter = 0;
		cout << endl;
	}
}
