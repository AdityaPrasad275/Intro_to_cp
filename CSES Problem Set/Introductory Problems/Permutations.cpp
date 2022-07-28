#include<iostream>
#include<set>
 
int main() {
	int n;
	std::cin >> n;
	if (n == 2 || n == 3) {
		std::cout << "NO SOLUTION";
	}
	else if (n == 1) std::cout << "1";
	else if (n == 4) std::cout << "3 1 4 2";
	else {
		if (n % 2 == 0) {
			int i = 2;
			while (i != n + 2) {
				std::cout << i << " ";
				i += 2;
			}
			i = 1;
			while (i != n + 1) {
				std::cout << i << " ";
				i += 2;
 
			}
		}
		else {
			int i = 1;
			while (i != n + 2) {
				std::cout << i << " ";
				i += 2;
			}
			i = 2;
			while (i != n + 1) {
				std::cout << i << " ";
				i += 2;
			}
		}
 
	}
}
