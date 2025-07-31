#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<int> freq(10, 0);
        for (char c : s) {
            freq[c - '0']++;
        }

        string result = "";
        for (int i = 0; i < 10; ++i) {
            for (int d = 9 - i; d <= 9; ++d) {
                if (freq[d] > 0) {
                    result += (char)(d + '0');
                    freq[d]--;
                    break; 
                }
            }
        }

        cout << result << '\n';
    }

    return 0;
}
