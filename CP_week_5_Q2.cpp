#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> h(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> h[i];
    }

    vector<int> dp(N + 1, INT_MAX);
    dp[1] = 0;

    for (int i = 1; i < N; ++i) {
        for (int j = 1; j <= K; ++j) {
            if (i + j <= N) {
                dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
            }
        }
    }

    cout << dp[N] << endl;
    return 0;
}
