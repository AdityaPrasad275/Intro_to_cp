#include <iostream>
#include<string>
using namespace std;

int main() {
    int t, n, cstart38 = 0, cltime108 = 0;
    string temp;
    cin >>t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> temp;
            if(temp[0] == 'S') cstart38++;
            else cltime108++;
        }
        cout << cstart38 << " " << cltime108 << endl;
        cstart38=0;
        cltime108=0;
    }
	return 0;
}
