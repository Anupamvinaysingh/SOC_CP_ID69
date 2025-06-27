#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
    int n, k;
    cin >> n >> k;
    vector<int> mice(k);
    for (int i = 0; i < k; i++) {
        cin >> mice[i];
    }

    sort(mice.begin(), mice.end()); 

    int saved = 0;
    long long cat_steps = 0;

    for (int i = k - 1; i >= 0; i--) {
        if (mice[i] > cat_steps) {
            saved++;
            cat_steps += (n - mice[i]);
        } else {
            break;
        }
    }

    cout << saved << endl;
}
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n,k;
//     cin >> n >> k;
//     vector <int> mice(k);
//     for (int i=0;i<k;i++) {cin>> mice[i];}
//     int saved=0; int cat_pos=0;
//     sort(mice.begin(),mice.end());
//     while(mice.size()) {
//         cat_pos=n-mice.back();
//         saved++;
//         mice.pop_back();
//         if(mice.size()) {
//         while(mice[0]<cat_pos) {mice.erase(mice.begin());}}
//     }
//     cout << saved;
// }