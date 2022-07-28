#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t){
	    cin >> x;
	    if(x>30) cout << "YES\n";
	    else cout << "NO\n";
	    t--;
	}
	return 0;
}
