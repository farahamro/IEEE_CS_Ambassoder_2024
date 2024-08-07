#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int shovels = (10 - r % 10) % 10;
    if (shovels == 0) {
        shovels = 10;
    }

    cout << (k + shovels - 1) / shovels << endl;

    return 0;
}
