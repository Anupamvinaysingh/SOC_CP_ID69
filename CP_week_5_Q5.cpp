#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> w(N), v(N);
    int V_max = 0;

    for (int i = 0; i < N; ++i) {
        cin >> w[i] >> v[i];
        V_max += v[i];
    }

    vector<long long> dp(V_max + 1, LLONG_MAX);
    dp[0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int v_curr = V_max; v_curr >= v[i]; --v_curr) {
            if (dp[v_curr - v[i]] != LLONG_MAX) {
                dp[v_curr] = min(dp[v_curr], dp[v_curr - v[i]] + w[i]);
            }
        }
    }

    int max_value = 0;
    for (int v_curr = V_max; v_curr >= 0; --v_curr) {
        if (dp[v_curr] <= W) {
            max_value = v_curr;
            break;
        }
    }

    cout << max_value << endl;
    return 0;
}
