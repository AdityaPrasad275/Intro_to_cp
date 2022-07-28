#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using std::cin;
using std::cout;
char endl = '\n';

int main() {
	int t;
	std::string temp;
	std::vector<std::string> board;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 8; i++)
		{
			cin >> temp;
			board.push_back(temp);
		}
		for (int i = 1; i <= 6; i++)
		{
			if (std::count(board[i].begin(), board[i].end(), '#') == 1 && std::count(board[i - 1].begin(), board[i - 1].end(), '#') == 2 && std::count(board[i + 1].begin(), board[i + 1].end(), '#') == 2) {
				cout << i + 1 << " " << board[i].find('#', 1) + 1;
				break;
			}
		}
		board.clear();
		cout << endl;
	}
}
