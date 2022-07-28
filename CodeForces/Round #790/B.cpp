#include<iostream>
#include<vector>
#include<algorithm>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int t, n, temp, sum = 0, i;
	std::vector<int> candies_per_box;
	cin >> t;
	while (t) {
		cin >> n;
		i = n;
		while (n) {
			cin >> temp;
			candies_per_box.push_back(temp);
			n--;
		}
		std::sort(candies_per_box.begin(), candies_per_box.end());
		n = 1;
		while (n<i) {
			sum += (candies_per_box[n] - candies_per_box[0]);
			n++;
		}
		cout << sum << endl;
		t--;
		candies_per_box.clear();
		sum = 0;
	}
}
