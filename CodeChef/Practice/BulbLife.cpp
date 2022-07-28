#include <iostream>
using namespace std;

int main() {
	int t, n, x, temp, lifeTime;
	cin >>t;
	while(t){
	    cin >> n >> x;
	    lifeTime= n*x;
	    
	    while(n-1){
	        cin >>temp;
	        lifeTime=lifeTime-temp;
	        n--;
	    }
	    if(lifeTime>=0)
	        cout << lifeTime << endl;
	    else
	        cout << 0 <<endl;
	    t--;
	}
	return 0;
}
