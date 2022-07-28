#include<iostream>
#include<vector>
 
int main() {
	long long int n, temp, counter= 0;
	std::vector<int> arr;
	std::cin >> n;
	while (n--) {
		std::cin >> temp;
		arr.push_back(temp);
	}
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i - 1] > arr[i]) {
			counter = counter + arr[i - 1] - arr[i];
			arr[i] = arr[i - 1];
		}
	}
	std::cout << counter;
}
