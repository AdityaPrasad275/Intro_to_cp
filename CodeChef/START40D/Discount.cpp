#include<iostream>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int t, n, x, y, temp, sum_without = 0, sum_with = 0;
	cin >> t;
	while (t--) {
		cin >> n >> x >>y;
		while (n--) {
			cin >> temp;
			
			if (temp - y >= 0) sum_with += temp - y;
			else sum_with += 0;
			sum_without += temp;
		}
		if (sum_with + x < sum_without) cout << "COUPON\n";
		else cout << "NO COUPON\n";
		sum_without = 0;
		sum_with = 0;
	}
}
