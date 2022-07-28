#include <iostream>
using namespace std;

int main() {
	int t, x, y, z;
	cin >>t;
	while(t){
	    cin >> x >> y >> z;
	    if((z-(y/x)) >= 0) cout << z - (y/x);
	    else cout << 0;
	    cout << endl;
	    t--;
	}
	return 0;
}
