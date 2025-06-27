#include <iostream>
using namespace std;
int main() {
    int n,k,r;
    cin >> n >> k;
    for (r=0;r<n;r++) {
        if(r*(r+3)==2*(n+k)) break;
    }
    cout << n-r;
}