#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin>>t;
	while(t--){
	    cin >> x>>y;
	    if(y<=x+200 && y>=x) cout << "yes";
	    else cout << "no";
	    cout << "\n";
	}
	return 0;
}
