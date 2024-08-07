#include <iostream>
#include <set>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;
        set<char> digits;
        int temp = year;
        while (temp > 0) {
            digits.insert(temp % 10 + '0');
            temp /= 10;
        }
        if (digits.size() == 4) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
