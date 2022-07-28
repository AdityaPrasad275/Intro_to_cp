#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, timur, x, y, z, counter = 0;
	cin >> t;
	while (t--) {
		cin >> timur >> x >> y >> z;
		if (timur < x) counter++;
		if (timur < y) counter++;
		if (timur < z) counter++;
		cout << counter;
		cout << endl;
		counter = 0;
	}
}
