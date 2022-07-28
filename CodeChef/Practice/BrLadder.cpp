#include <iostream>
using namespace std;

int main() {
	int Q, a, b;
	cin >> Q;
	while(Q){
	    cin >> a >>b;
	    if((a-b)==2 || (b-a)==2) cout << "YES\n";
	    else if((a-b)==1 && b%2 != 0) cout << "YES\n";
	    else if((b-a)==1 && a%2 != 0) cout << "YES\n";
	    else cout << "NO\n";
	    Q--;
	}
	return 0;
}
