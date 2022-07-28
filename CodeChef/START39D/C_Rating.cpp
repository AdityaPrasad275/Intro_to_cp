#include <iostream>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if((y-x)%8!=0) cout << ((y-x)/8) + 1 << endl;
        else cout << (y-x)/8 << endl;
    }
	return 0;
}
