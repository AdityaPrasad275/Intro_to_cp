#include <iostream>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        if(n%6==0) cout << (n/6)*x;
        else cout << (n/6 + 1)*x;
        cout << endl;
    }
	return 0;
}
