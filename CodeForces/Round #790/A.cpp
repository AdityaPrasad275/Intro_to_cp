#include<iostream>
using std::cin;
using std::cout;
int main() {
	int t, n = 6;
	int number[6];
	char digit;
	std::cin >> t;
	while (t) {
		while (n) {
			cin >> digit;
			number[6 - n] = (int)digit - 48;
			n--;
		}
		if ((number[0] + number[1] + number[2]) == (number[3] + number[4] + number[5])) cout << "yes\n";
		else cout << "no\n";
		n = 6;
		t--;
	}
}
