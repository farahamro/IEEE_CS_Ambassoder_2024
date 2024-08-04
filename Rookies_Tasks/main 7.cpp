#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> p;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            p.push_back(i);
        }
    }

    int k = 0;
    vector<int> result;
    for (int i = p.size() - 1; i >= 0; i--) {
        while (n >= p[i]) {
            n -= p[i];
            result.push_back(p[i]);
            k++;
        }
    }

    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }


    return 0;
}
