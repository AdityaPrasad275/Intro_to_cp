#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--){
	    cin >> x >>y;
	   // 500 - x*2 + 1000 - (x+y)*4 
	   // 1000 - y*4 + 500 - (x+y)*2
	    
	    if(y>2*x) cout << 500 - x*2 + 1000 - (x+y)*4 << endl;
	    else cout << 1000 - y*4 + 500 - (x+y)*2 << endl;
	}
	return 0;
}
