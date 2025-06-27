#include <iostream>
using namespace std;
int main() {
    int testcases;
    cin >> testcases;
    int arr[testcases][2];
    for (int k=0;k<testcases;k++) {
        cin >> arr[k][0] >> arr[k][1];
    }
    for (int k=0;k<testcases;k++) {
        int n=1;
        while (n*(n-1)/2<=arr[k][1]-arr[k][0]) {n++;};
        cout << n-1 << endl;
    }
}