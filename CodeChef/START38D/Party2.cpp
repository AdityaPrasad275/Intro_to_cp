#include <iostream>
using namespace std;

int main() {
	int t, n, x, k;
	cin >>t;
	while(t--){
	    cin >> n >> x >> k;
	    if(x*n>k) cout << "NO\n";
	    else cout <<"YES\n";
	}
	return 0;
}
