#include<iostream>
#include<vector>
 
int main() {
	std::string input;
	int counter = 0, max = 0;
	std::cin >> input;
	for (int i = 0; i < input.length() - 1; i++)
	{
		if (input[i] == input[i + 1]) counter++;
		else counter = 0;
		max = std::max(max, counter);
	}
	std::cout << max + 1;
}
