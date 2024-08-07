#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long sum = 0;
    int oddCount = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        } else {
            oddCount++;
            if (oddCount % 2 == 0) {
                sum += a[i];
            }
        }
    }

    cout << sum << endl;

    return 0;
}
