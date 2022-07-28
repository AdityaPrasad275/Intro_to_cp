#include<iostream>
#include<set>
int main() {
	int t, a, b, k , diff;
	std::set<int> factors;
	std::cin >> t;
	while (t--) {
		std::cin >> a >> b;
		if (a > b) diff = a - b;
		else diff = b - a;
		k = 1;
		while (diff / k >= k) {
			if (diff % k == 0) {
				factors.insert(k);
				factors.insert(diff / k);
			}
			k++;
		}
		std::cout << factors.size() << std::endl;
		factors.clear();

	}
}
