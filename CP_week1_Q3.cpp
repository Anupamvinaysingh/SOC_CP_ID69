#include <iostream>
using namespace std;
int main() {
    string a, b;
    int an=0;
    cin >> a >> b;
    for (int i=0; i< a.size(); i++) {
        if (a[i]==b[i] || a[i]==b[i]+'a'-'A' || a[i]==b[i]-'a'+'A') continue;
        if (a[i]>b[i]) {
            an+=1;
            break;
        }
        if (a[i]<b[i]) {
            an-=1;
            break;
        }
    }
    cout << an;
}