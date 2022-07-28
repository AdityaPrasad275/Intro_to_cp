#include<iostream>
#include<string>
#include<algorithm>

using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t, n, x;
	std::string palindrome = "", temp;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		if (n == 1) cout << "z";
		else if (n % 2 == 1 && x <= n / 2 + 1) {
			int i;
			for (i = 1; i <= n / 2; i++)
			{
				if (i <= x) palindrome += (char)(96 + i);
				else palindrome += (char)(96 + x);
			}
			if (i <= x) palindrome += char(96 + i);
			else palindrome += (char)(96 + x);
			for (i = i - 1; i >= 1; i--)
			{
				if (i <= x) palindrome += (char)(96 + i);
				else palindrome += (char)(96 + x);
			}
			cout << palindrome;
		}
		else if (n % 2 == 1 && x != n / 2 + 1) cout << -1;
		else if (n / 2 < x) cout << -1;
		else {
			for (int i = 1; i <= n/2; i++)
			{
				if (i <= x) palindrome += (char)(96 + i);
				else palindrome += (char)(96 + x);
			}
			temp = palindrome;
			std::reverse(palindrome.begin(), palindrome.end());
			cout << temp + palindrome;
		}
		cout << endl;
		palindrome = "";
		temp = "";
	}
}
