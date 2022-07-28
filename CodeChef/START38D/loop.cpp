#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
	int t, a , b , m;
	cin >>t;
	while(t--){
	    cin >> a >>b >>m;
	    if(abs(b-a) > abs(m-abs(b-a))) cout << abs(m - abs(b - a)) << endl;
	    else cout << abs(b-a) << endl;
	}
	return 0;
}
