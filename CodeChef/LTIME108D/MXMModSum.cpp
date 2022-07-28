#include <iostream>
#include<set>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main() {
	ll t, n, m, temp, last, second_last;
	set<ll> arr;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		while (n--) {
			cin >> temp;
			arr.insert(temp);
		}
		auto it = arr.end();
		it--;
		last = *it;
		it--;
		second_last = *it;
		if ((second_last + (second_last - last) % m + m) < last) cout << 2 * last << endl;
		else cout << last + second_last + (second_last - last) % m + m << endl;
		arr.clear();
	}
	return 0;
}
