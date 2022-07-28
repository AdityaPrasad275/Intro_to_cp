#include<iostream>
#include<vector>

int main() {
	int n, temp;
	std::vector<int> arr;

	std::cin >> n;

	while (n) {
		std::cin >> temp;
		arr.push_back(temp);
		n--;
	}

	for (int i = arr.size() - 1; i >=0; i--)
	{
		for (int j = i-1; j>=0; j--)
		{
			if (arr[j] == arr[i]) arr[j] = 0;
		}
	}
	int counter = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != 0) counter++;
	}
	std::cout << counter << '\n';
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != 0) std::cout << arr[i] << " ";
	}
}
