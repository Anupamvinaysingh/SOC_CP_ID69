#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWins(int n, long long d, vector<int>& powers) {
    sort(powers.rbegin(), powers.rend()); 
    int wins = 0;
    int i = 0;

    while (i < n) {
        int teamSize = 1;
        while (i + teamSize - 1 < n && 1LL * teamSize * powers[i] <= d) {
            teamSize++;
        }

        if (i + teamSize - 1 >= n) break;

        wins++;
        i += teamSize; 
    }

    return wins;
}

int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<int> powers(n);
    for (int i = 0; i < n; ++i) {
        cin >> powers[i];
    }

    cout << maxWins(n, d, powers) << endl;
    return 0;
}




// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n, D;
//     cin >> n >> D;
//     vector <int> players(n);
//     for (int i = 0; i < n; i++) {
//         cin >> players[i];
//     }
//     int ans = 0, left = 0, right = n - 1;
// while (left <= right) {
//     int needed = D / players[left] + 1;
//     if (right - left + 1 >= needed) {
//         ans++;
//         right -= (needed - 1);
//         left++;
//     } else {
//         break;
//     }
// }

//     // int m=0;
//     // int ans=0;
//     // sort(players.begin(),players.end(), greater<int>());
//     // while(m<n) {
//     //     if (D%players[ans]==0) m=m+D/players[ans];
//     //     else m=m+D/players[ans] + 1;
//     //     if (players[ans]>=D) {ans+=1;continue;};
//     //     for(int i=0; i < D/players[ans]; i++) {players.pop_back();};
//     //     if (m<n) ans++;
//     // }
//     cout << ans;
// }