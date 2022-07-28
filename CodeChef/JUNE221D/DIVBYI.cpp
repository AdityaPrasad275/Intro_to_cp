#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;

int main() {
	int t, n, multi = -1;
	cin >> t;
	std::vector<int> arr;
	while (t--)
	{
		cin >> n;
		arr.push_back(n);
		for (int i = n-1; i > 0; i--)
		{
			arr.push_back(arr[n - 1 - i] + multi * i);
			multi = multi * (-1);
		}
		std::reverse(arr.begin(), arr.end());
		for (auto x : arr) {
			cout << x << " ";
		}
		arr.clear();
		multi = -1;
		cout << "\n";
	}
}
