#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	while(t){
	    cin >> x >> y;
	    if(100*x < 10*y) cout << "DISPOSABLE\n";
	    else if(100*x == 10*y) cout << "CLOTH\n";
	    else cout << "CLOTH\n";
	    t--;
	}
	return 0;
}
