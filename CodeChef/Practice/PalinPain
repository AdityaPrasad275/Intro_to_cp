#include<iostream>
#include<string>

using namespace std;

int main() {
	int t, x, y;
	
	cin >> t;
	while (t)
	{
		cin >> x >> y;
		if (x % 2 == 1 && y % 2 == 1) cout << -1 << endl;
		else if (x == 1 || y == 1) cout << -1 << endl;
		else {
			int length = x + y;

			string s1 = " ", s2 = " ";
			for (int i = 1; i < x + y; i++)
			{
				s1 = s1 + " ";
				s2 = s2 + " ";
			}

			if (x % 2 == 0 && y % 2 == 1) {
				s1[(length - 1) / 2] = 'b';
				s2[(length - 1) / 2] = 'b';

				int i = 1;
				while (i <= x / 2) {
					s1[((length - 1) / 2) - i] = 'a';
					s1[((length - 1) / 2) + i] = 'a';
					i++;
				}
				while (i <= (length - 1) / 2) {
					s1[((length - 1) / 2) - i] = 'b';
					s1[((length - 1) / 2) + i] = 'b';
					i++;
				}
				int j = 1;
				while (j <= (y - 1) / 2) {
					s2[((length - 1) / 2) - j] = 'b';
					s2[((length - 1) / 2) + j] = 'b';
					j++;
				}
				while (j <= (length - 1) / 2) {
					s2[((length - 1) / 2) - j] = 'a';
					s2[((length - 1) / 2) + j] = 'a';
					j++;
				}
			}
			else if (x % 2 == 1 && y % 2 == 0) {
				s1[(length - 1) / 2] = 'a';
				s2[(length - 1) / 2] = 'a';

				int i = 1;
				while (i <= (x-1) / 2) {
					s1[((length - 1) / 2) - i] = 'a';
					s1[((length - 1) / 2) + i] = 'a';
					i++;
				}
				while (i <= (length - 1) / 2) {
					s1[((length - 1) / 2) - i] = 'b';
					s1[((length - 1) / 2) + i] = 'b';
					i++;
				}
				int j = 1;
				while (j <= y / 2) {
					s2[((length - 1) / 2) - j] = 'b';
					s2[((length - 1) / 2) + j] = 'b';
					j++;
				}
				while (j <= (length - 1) / 2) {
					s2[((length - 1) / 2) - j] = 'a';
					s2[((length - 1) / 2) + j] = 'a';
					j++;
				}
			}
			else {
				float dx = 0.5f;
				float midpoint = (float)(length - 1) / 2;

				int i = 1;
				while (i <= x / 2) {
					s1[midpoint - (2 * i - 1) * dx] = 'a';
					s1[midpoint + (2 * i - 1) * dx] = 'a';
					i++;
				}
				while (i <= length / 2) {
					s1[midpoint - (2 * i - 1) * dx] = 'b';
					s1[midpoint + (2 * i - 1) * dx] = 'b';
					i++;
				}
				i = 1;
				while (i <= y / 2) {
					s2[midpoint - (2 * i - 1) * dx] = 'b';
					s2[midpoint + (2 * i - 1) * dx] = 'b';
					i++;
				}
				while (i <= length / 2) {
					s2[midpoint - (2 * i - 1) * dx] = 'a';
					s2[midpoint + (2 * i - 1) * dx] = 'a';
					i++;
				}

			}
			cout << s1 << endl << s2 << endl;
		}
		
		t--;
	}
	/*char a;
	cin >> a;*/
}
