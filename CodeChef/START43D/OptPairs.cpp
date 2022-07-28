#include <iostream>
#include<set>
using namespace std;

int main() {
    int t, n, k = 1, diff;
    set<int> _factors;
    cin >> t;
    while (t--) {
        cin >> n;
        diff = n;
        while (diff / k >= k) {
            if (diff % k == 0) {
                _factors.insert(k);
                _factors.insert(diff / k);
            }
            k++;
        }
        if (n % 2 == 1) cout << (_factors.size() - 1) * 2;
        else cout << (_factors.size() - 2) * 2 + 1;
        cout << '\n';
        _factors.clear();
        k = 1;
    }
    return 0;
}
