#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> banknotes(n);
    for (int i = 0; i < n; ++i) {
        cin >> banknotes[i];
    }

    int max_sum = 0;
    for (int i = 0; i < n; ++i) {
        max_sum += banknotes[i];
    }

    vector<bool> dp(max_sum + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; ++i) {
        for (int j = max_sum; j >= banknotes[i]; --j) {
            if (dp[j - banknotes[i]]) {
                dp[j] = true;
            }
        }
    }

    for (int i = 1; i <= max_sum; ++i) {
        if (!dp[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
