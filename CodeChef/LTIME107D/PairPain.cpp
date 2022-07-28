#include<iostream>


using namespace std;

int main() {
    long long unsigned int t, n, i, temp, oneCounter = 0, pairs = 0, twoCounter = 0;

    cin >> t;
    while (t) {
        cin >> n;
        i = n;
        while (i) {
            cin >> temp;
            if (temp == 1) oneCounter++;
            else if (temp == 2) twoCounter++;
            
            i--;
        }
        pairs = (n - oneCounter) * oneCounter;
        pairs = pairs + (oneCounter) * (oneCounter - 1) / 2;
        pairs = pairs + (twoCounter) * (twoCounter - 1) / 2;

        cout << pairs << endl;

        t--;
        pairs = 0;
        oneCounter = 0;
        twoCounter = 0;
    }
    char a;
    cin >> a;
}
