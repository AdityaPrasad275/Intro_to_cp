#include<iostream>
#include<set>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, n, i, temp;
	std::set<int> arr;
	cin >> t;
	while (t--) {
		cin >> n;
		i = n;
		while (i--)
		{
			cin >> temp;
			arr.insert(temp);
		}
		if ((n - arr.size()) % 2 == 0) cout << arr.size();
		else cout << arr.size() - 1;
		arr.clear();
		cout << endl;
	}
}
