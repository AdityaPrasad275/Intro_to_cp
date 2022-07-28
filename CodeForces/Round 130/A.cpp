#include<iostream>

int main() {
	int t, n, m, temp, sum = 0;
	std::cin >> t;
	while (t--) {
		std::cin >> n >> m;
		while (n--) {
			std::cin >> temp;
			sum = sum + temp;
		}
		if (m >= sum) std::cout << 0;
		else std::cout << sum - m;
		std::cout << "\n";
		sum = 0;
	}
}
