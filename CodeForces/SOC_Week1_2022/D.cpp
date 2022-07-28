#include<iostream>
#include<algorithm>
#include<vector>

int main() {
	std::vector<signed int> inputArray;
	int n;
	signed int temp;
	std::cin >> n;
	if (n == 1) std::cout << "NO";
	else {
		while (n) {
			std::cin >> temp;
			inputArray.push_back(temp);
			n--;
		}

		std::sort(inputArray.begin(), inputArray.end());

		for (int i = 1; i < inputArray.size(); i++)
		{
			if (inputArray[i] != inputArray[0]) {
				std::cout << inputArray[i];
				return 0;
			}
		}
		std::cout << "NO";
	}
}
