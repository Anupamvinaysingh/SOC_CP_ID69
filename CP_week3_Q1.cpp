#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int sereja=0;
    int dima=0;
    while(!arr.empty()){
        if (arr.front()>arr.back()) {
            sereja+= arr.front();
            arr.erase(arr.begin());
        }
        else {
            sereja += arr.back();
            arr.pop_back();
        }
        if(arr.empty()) break;
        if (arr.front()>arr.back()) {
            dima+= arr.front();
            arr.erase(arr.begin());
        }
        else {
            dima += arr.back();
            arr.pop_back();
        }
    }
    cout << sereja << " " << dima;
}