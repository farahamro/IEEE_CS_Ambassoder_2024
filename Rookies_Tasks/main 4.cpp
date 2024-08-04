#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;

    int k = (a + b % n) % n;
    if (k <= 0) {
        k += n;
    }

    cout << k << endl;

    return 0;
}
