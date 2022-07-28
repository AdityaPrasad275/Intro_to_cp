#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin >>t;
	while(t--){
	    cin >> n >>k;
	    if(n%2==1 && k==0) cout << "no\n";
	    else cout << "yes\n";
	}
	return 0;
}
