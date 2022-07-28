#include<iostream>

using std::cout;

int main() {
	int t, n, temp;
	std::cin >> t;
	int parity1, temp1, parity2, temp2;
	bool canItBeDone = true;
	
	while (t) {
		std::cin >> n;

		std::cin >> temp1;
		parity1 = temp1 % 2;
		std::cin >> temp2;
		parity2 = temp2 % 2;

		int i = 3;

		while (i <= n) {
			std::cin >> temp;
			if (i % 2 == 1 && temp % 2 != parity1) canItBeDone = false;
			else if (i % 2 == 0 && temp % 2 != parity2) canItBeDone = false;
			i++;
		}
		if (canItBeDone) std::cout << "YES\n";
		else std::cout << "NO\n";
		canItBeDone = true;
		t--;
	}
}
