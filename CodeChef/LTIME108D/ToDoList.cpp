#include <iostream>
using namespace std;

int main() {
	int t, n, d, counter = 0;
	cin >>t;
	while(t--){
	    cin >> n;
	    while(n--){
	        cin >> d;
	        if(d>=1000) counter++;
	    }
	    cout << counter << endl;
	    counter=0;
	}
	return 0;
}
