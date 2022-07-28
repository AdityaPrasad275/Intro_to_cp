#include<iostream>

int main() {
	long long int t, n;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		if (n == 4) std::cout << "1 1";
		else if (n == 6) std::cout << "1 1";
		else if (n % 4 != 0 && n % 6 != 0) std::cout << -1 << std::endl;
		else std::cout << n / 6 << " " << n / 4 << '\n';
	}
}
