#include<iostream>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, n;
	std::string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		for (int i = 0; i < n; i+= 2)
		{
			if (s[i] == '0' && s[i + 1] == '0') cout << 'A';
			else if (s[i] == '0' && s[i + 1] == '1') cout << 'T';
			else if (s[i] == '1' && s[i + 1] == '0') cout << 'C';
			else if (s[i] == '1' && s[i + 1] == '1') cout << 'G';
		}
		cout << endl;
	}
}
