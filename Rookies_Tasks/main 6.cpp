#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << -1 << endl;
        return 0;
    }

    int diff = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i - 1] != diff) {
            cout << -1 <<endl;
            return 0;
        }
    }

    if (diff > 0) {
        std::cout << "UP" << std::endl;
    } else if (diff < 0) {
        std::cout << "DOWN" << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
