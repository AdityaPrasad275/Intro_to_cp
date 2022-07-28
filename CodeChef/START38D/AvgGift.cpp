#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t, n, x, temp;
	std::vector<signed int> sign;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		if (n == 1) {
			cin >> temp;
			if (temp != x) cout << "NO\n";
			else cout << "YES\n";
		}
		else {
			while (n--) {
				cin >> temp;
				if (temp - x > 0) sign.push_back(1);
				else if (temp - x == 0) sign.push_back(0);
				else sign.push_back(-1);
			}
			sort(sign.begin(), sign.end());
			if (sign[0] == sign[sign.size() - 1] && sign[0] != 0) cout << "NO\n";
			else cout << "YES\n";
			sign.clear();
		}
		
	}
	return 0;
}
