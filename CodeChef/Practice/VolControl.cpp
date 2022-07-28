#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int t, x, y;
    cin >> t;
    while(t){
        cin >> x >> y;
        if(y>x){
            cout << y - x << endl;
        }else{
            cout << x - y << endl;
        }
        t--;
    }
	return 0;
}
