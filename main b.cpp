#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool alphabet[26] = {false};

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            alphabet[c - 'a'] = true;
        } else if (c >= 'A' && c <= 'Z') {
            alphabet[c - 'A'] = true;
        }
    }

    bool isPangram = true;
    for (bool b : alphabet) {
        if (!b) {
            isPangram = false;
            break;
        }
    }

    cout << (isPangram ? "YES" : "NO") << endl;

    return 0;
}
