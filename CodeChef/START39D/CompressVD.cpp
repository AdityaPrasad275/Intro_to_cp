#include<iostream>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int t, n, ai, counter = 0;
	std::vector<int> arr;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n == 1) {
			cin >> ai;
			cout << 1;
		}
		else if (n == 2) {
			int temp1, temp2;
			cin >> temp1 >> temp2;
			if (temp1 == temp2) cout << 1;
			else cout << 2;
		}
		else {
			while (n--) {
				cin >> ai;
				arr.push_back(ai);
			}
			for (int i = 0; i < arr.size(); i++)
			{
				if (i == arr.size() - 2) {
					if (arr[i - 1] == arr[i]) counter++;
					if (arr[i] == arr[i + 1]) {
						counter++;
						break;
					}
				}
				else if (i == 0) {
					if (arr[i] == arr[i + 1]) {
						counter++;
						i++;
					}
				}
				else if (i == arr.size() - 1) {
					if (arr[i] == arr[i - 1]) counter++;
				}
				else {
					if (arr[i] == arr[i - 1]) counter++;
					if (arr[i] == arr[i + 1]) {
						counter++;
						i++;
					}
				}
			}
			cout << arr.size() - counter;
		}
		
		arr.clear();
		counter = 0;
		cout << endl;
	}
}
