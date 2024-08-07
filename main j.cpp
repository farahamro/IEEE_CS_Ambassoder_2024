
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> banknotes(n);
    for (int i = 0; i < n; ++i) {
        cin >> banknotes[i];
    }

    sort(banknotes.begin(), banknotes.end());

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (sum + 1 < banknotes[i]) {
            cout << sum + 1 << endl;
            return 0;
        }
        sum += banknotes[i];
    }

    std::cout << -1 << std::endl;

    return 0;
}
