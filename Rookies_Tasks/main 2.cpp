#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> horizontal(n, false);
    vector<bool> vertical(n, false);

    for (int i = 0; i < n * n; i++) {
        int h, v;
        cin >> h >> v;

        if (!horizontal[h - 1] && !vertical[v - 1]) {
            horizontal[h - 1] = true;
            vertical[v - 1] = true;
            cout << i + 1 << " ";
        }
    }

    return 0;
}
