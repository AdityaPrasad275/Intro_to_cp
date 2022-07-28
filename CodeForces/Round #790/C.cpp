#include<iostream>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int t, n, m, sum = 0;
	char temp;
	std::vector<std::vector<int>> wordMap;
	std::vector<int> difference;
	std::vector<int> tempVec;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> temp;
				tempVec.push_back((int)temp);
			}
			wordMap.push_back(tempVec);
			tempVec.clear();
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				for (int k = 0; k < m; k++)
				{
					if (wordMap[i][k] > wordMap[j][k]) sum += (wordMap[i][k] - wordMap[j][k]);
					else sum += (wordMap[j][k] - wordMap[i][k]);
				}
				difference.push_back(sum);
				sum = 0;
			}
		}
		std::sort(difference.begin(), difference.end());
		cout << difference[0] << endl;
		difference.clear();
		tempVec.clear();
		wordMap.clear();
	}
}
