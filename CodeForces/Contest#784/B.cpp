#include<iostream>
#include<algorithm>
#include<vector>

int main() {
	std::vector<int> inputArray;
	int t, n, temp;
	std::cin >> t;
	while (t) {
		std::cin >> n;
		while (n) {
			std::cin >> temp;
			inputArray.push_back(temp);
			n--;
		}
		std::sort(inputArray.begin(), inputArray.end());

		int counter = 1, num = -1;
		for (int i = 1; i < inputArray.size(); i++)
		{
			if (inputArray[i] == inputArray[i - 1]) counter++;
			else counter = 1;

			if (counter == 3) {
				num = inputArray[i];
				break;
			}
		}
		std::cout << num << std::endl;
		t--;
		inputArray.clear();
	}

}
