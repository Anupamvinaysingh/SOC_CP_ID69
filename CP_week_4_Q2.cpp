#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        long long gellyTime = 2 * d + 2 * b - 1;
        long long flowerTime = 2 * c + 2 * a;
        
        if (gellyTime < flowerTime) {
            cout << "Gellyfish\n";
        } else {
            cout << "Flower\n";
        }
    }
    return 0;
}
