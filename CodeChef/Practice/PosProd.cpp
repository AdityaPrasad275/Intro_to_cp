#include<iostream>

using std::cin;
using std::cout;

int main() {
	long int t, n, temp, positiveCount = 0, negativeCount = 0;

	cin >> t;
	while (t) {
		positiveCount = 0; negativeCount = 0;
		cin >> n;
		while (n) {
			cin >> temp;
			if (temp > 0) positiveCount++;
			else if (temp < 0) negativeCount++;
			n--;
		}
		cout << (positiveCount * (positiveCount - 1) / 2) + (negativeCount * (negativeCount - 1) / 2) << std::endl;
		t--;
	}
}
