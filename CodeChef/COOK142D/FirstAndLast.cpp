#include<iostream>
#include<vector>

using namespace std;

int main() {
	long long int t, n, ai, max_sum = 0;
	vector<long long int> arr;
	cin >> t;
	while (t--) {
		cin >> n;
		while (n--) {
			cin >> ai;
			arr.push_back(ai);
		}
		for (int i = 0; i < arr.size() - 1; i++)
		{
			max_sum = max(max_sum, arr[i] + arr[i + 1]);
		}
		max_sum = max(max_sum, arr[0] + arr[arr.size() - 1]);
		cout << max_sum;
		cout << "\n";
		arr.clear();
		max_sum = 0;
	}
}

