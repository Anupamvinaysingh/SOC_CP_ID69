#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int min_hits(vector <int> hits) {
    int n, H;
    n=hits[0]; H=hits[1];
    vector <int> wpn(n);
    for (int i=0; i<n; i++) {
        wpn[i]=hits[i+2];
    }
    if(n==1) return (H%wpn[0]==0)? (H/wpn[0]) : (H/wpn[0] +1);
    int x = 0; 
    int y = 0; 

for (int i = 0; i < wpn.size(); i++) {
    if (wpn[i] > y) {
        x = y;
        y = wpn[i];
    } else if (wpn[i] > x) {
        x = wpn[i];
    }
}

    int full_cycle = x + y;
    int hits_needed = (H / full_cycle) * 2;
    int remaining = H % full_cycle;

    if (remaining == 0) return hits_needed;
    if (remaining <= y) hits_needed += 1;
    else hits_needed += 2;

    return hits_needed;
}
int main() {
    int testcases;
    cin >> testcases;
    int ans[testcases];
    for (int t = 0; t < testcases; t++) {
        int n, H;
        cin >> n >> H;
        vector<int> hits;
        hits.push_back(n);
        hits.push_back(H);

        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            hits.push_back(w);
        }

        ans[t]= min_hits(hits);
    }
    for (int t=0; t< testcases;t++) cout << ans[t] << endl;
}