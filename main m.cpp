#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> seen(n + 1, false);
    int tableCount = 0, maxTableCount = 0;

    for (int i = 0; i < 2 * n; i++) {
        int xi;
        cin >> xi;

        if (seen[xi]) {
            tableCount--;
        } else {
            seen[xi] = true;
            tableCount++;
            maxTableCount = max(maxTableCount, tableCount);
        }
    }

    cout << maxTableCount << endl;

    return 0;
}vv
