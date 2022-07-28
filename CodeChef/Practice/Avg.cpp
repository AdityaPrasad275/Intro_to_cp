#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, n, k, v, i, sum = 0, temp, x;
	cin >> t;
	while (t--) {
		cin >> n >> k >> v;
		i = n;
		while (i--) {
			cin >> temp;
			sum += temp;
		}
		if ((sum - n * v) % k == 0) {
			if ((sum - n * v) / k - v < 0) cout << v - (sum - n * v) / k;
			else cout << -1;
		}
		else cout << -1;
		
		sum = 0;
		cout << endl;
	}
}
