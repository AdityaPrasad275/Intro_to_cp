#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;

int main() {
	long long int t, n, counter = 0, po = 1;
	std::string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r') counter++;
		}
		if (counter) {
			for (int i = 0; i < counter; i++)
			{
				po = po * 2;
				po = po % (1000000007);
			}
			cout << po % (1000000007) << endl;
		}
		else cout << 1 << endl;
		counter = 0;
		po = 1;
	}
}
