#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	while(t--){
	    cin >> x >>y;
	    if(x-y<0) cout << 0;
	    else cout << x-y;
	    cout << endl;
	}
	return 0;
}
