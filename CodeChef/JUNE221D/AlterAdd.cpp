#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >>t;
	while(t--){
	    cin >> a >>b;
	    if((b-a)%3!=2) cout << "YES";
	    else cout << "NO";
	    cout << "\n";
	}
	return 0;
}
