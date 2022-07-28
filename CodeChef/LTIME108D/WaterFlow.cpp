#include <iostream>
using namespace std;
//w + y*z <=x
int main() {
	int t, w, x, y, z;
	cin>>t;
	while(t--){
	    cin >> w >> x >> y >> z;
	    if(w + y*z <x) cout << "unfilled\n";
	    else if(w + y*z ==x) cout << "filled\n";
	    else if(w + y*z >x) cout << "overflow\n";
	}
	return 0;
}
