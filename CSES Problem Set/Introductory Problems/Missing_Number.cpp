#include<iostream>
#include<set>
 
int main() {
	std::set<int> ascending;
	int n, temp;
	std::cin >> n;
	if (n == 2) {
		std::cin >> temp;
		if (temp == 1) std::cout << 2;
		else std::cout << 1;
	}
	else {
		n--;
		while (n--) {
			std::cin >> temp;
			ascending.insert(temp);
		}
		auto it = ascending.begin();
		auto prevIt = ascending.begin();
 
		for (int i = 0; i < ascending.size() - 1; i++)
		{
			it++;
			if (*it != *prevIt + 1) break;
			prevIt = it;
		}
		std::cout << *prevIt + 1;
	}
}
