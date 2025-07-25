#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> a;
        int l = 0, r = n - 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a.push_back(b[l++]); 
            } else {
                a.push_back(b[r--]);  
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
