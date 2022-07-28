#include<iostream>
#include<string>
#include<algorithm>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	long long int t, n;
	std::string var = "";
	char s;
	cin >> t;
	while (t--) {
		cin >> n;
		while (n--)
		{
			cin >> s;
			switch (s)
			{
			case 'A':
				var += 'T';
				break;
			case 'T':
				var += 'A';
				break;
			case 'G':
				var += 'C';
				break;
			case 'C':
				var += 'G';
				break;
			default:
				break;
			}
		}
		cout << var;
		var = "";
		cout << endl;
	}
}
