#include<iostream>
#include<vector>

int main() {
	int t, n, temp;
	std::cin >> t;
	std::vector<int> inputArr;
	while (t) {
		std::cin >> n;
		int length = n;

		while (n) {
			std::cin >> temp;
			inputArr.push_back(temp);
			n--;
		}

		int indexR = 0, indexL = length - 1, sumR = inputArr[0], sumL = inputArr[length - 1], count = -1;
		
		while (indexR != indexL) {
			if (sumR > sumL) {
				indexL--;
				sumL = sumL + inputArr[indexL];
			}
			else if (sumR < sumL) {
				indexR++;
				sumR = sumR + inputArr[indexR];
			}
			else {
				count = indexR + 1 + length - indexL;
				indexR++;
				sumR = sumR + inputArr[indexR];
			}
		}

		std::cout << count << std::endl;
		inputArr.clear();
		t--;
	}
}
