#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    int prev2 = 0, prev1 = abs(h[1] - h[0]);

    for (int i = 2; i < N; ++i) {
        int curr = min(prev1 + abs(h[i] - h[i-1]),
                       prev2 + abs(h[i] - h[i-2]));
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl; 
    return 0;
}