#include<iostream>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	long long int t, n, var = 0;
	std::vector<long long int> arr;
	std::vector<int> sizeArr;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> var;
			arr.push_back(var);
		}
		std::sort(arr.begin(), arr.end());
		int index = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			if (i == arr.size() - 1 && arr[i] == arr[i - 1]) sizeArr.push_back(i - index + 1);
			else if (i == arr.size() - 1 && arr[i] != arr[i - 1]) {
				sizeArr.push_back(i - index);
				sizeArr.push_back(1);
			}
			else {
				if (arr[i] != arr[index]) {
					sizeArr.push_back(i - index);
					index = i;
				}
			}
		}
		cout << arr.size() - sizeArr[sizeArr.size() - 1];
		arr.clear();
		sizeArr.clear();
		var = 0;
		cout << endl;
	}
}