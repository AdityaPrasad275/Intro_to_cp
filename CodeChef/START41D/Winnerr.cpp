#include <iostream>
using namespace std;

int main() {
    int t, pa, pb, qa, qb, maxp, maxq;
    cin >>t;
    while(t--){
        cin >> pa>>pb>>qa>>qb;
        maxp=max(pa, pb);
        maxq=max(qa, qb);
        if(maxq>maxp) cout << "P\n";
        else if(maxp==maxq) cout << "TIE\n";
        else cout << "Q\n";
    }
	return 0;
}
