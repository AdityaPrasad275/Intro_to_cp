#include<iostream>
#include<set>
#include<string>

using std::cin;
using std::cout;

int main() {
	int t, n;
	std::string a, b;
	std::set<char> different_chars;
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> a >> b;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i]) different_chars.insert(b[i]);
		}
		cout << different_chars.size();
		cout << "\n";
		different_chars.clear();
	}
}
