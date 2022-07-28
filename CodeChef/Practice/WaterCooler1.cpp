#include <iostream>
using namespace std;

int main() {
	int t, x,y,m;
	cin >>t;
	while(t){
	    cin >> x >> y >> m;
	    if((m*x) <y)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	    t--;
	}
	return 0;
}
