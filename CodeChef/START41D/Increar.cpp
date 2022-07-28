#include <iostream>
using namespace std;

int main() {
	int t, x, y, diff;
	cin >> t;
	while(t--){
	    cin >> x>>y;
	    diff = abs(x-y);
	    if(x>y){
	        if(diff%2==1) cout << (diff+1)/2 + 1;
	        else cout<<diff/2;
	    }else cout << diff;
	    cout <<endl;
	}
	return 0;
}
