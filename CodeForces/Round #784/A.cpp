#include<iostream>
using std::cout;
int main() {
	int t, r;
	std::cin >> t;
	while (t) {
		std::cin >> r;
		if (r <= 1399) cout << "Division 4\n";
		else if (r >= 1400 && r <= 1599) cout << "Division 3\n";
		else if (r >= 1600 && r <= 1899) cout << "Division 2\n";
		else cout << "Division 1\n";
		t--;
	}
}
