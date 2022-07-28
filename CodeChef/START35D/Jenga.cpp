#include <iostream>
using namespace std;

int main() {
	int t, n , x;
	cin >> t;
	while(t){
	    cin >> n >> x;
	    if(x%n==0) cout << "YES\n";
	    else cout << "NO\n";
	    t--;
	}
	return 0;
}
