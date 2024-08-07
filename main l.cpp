#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<string> ans;

        for (int a = 1; a <= 12; ++a) {
            if (12 % a == 0) {
                int b = 12 / a;
                bool win = false;

                for (int i = 0; i < b; ++i) {
                    bool columnWin = true;
                    for (int j = 0; j < a; ++j) {
                        if (s[j * b + i] != 'X') {
                            columnWin = false;
                            break;
                        }
                    }
                    if (columnWin) {
                        win = true;
                        break;
                    }
                }

                if (win) {
                    ans.push_back(std::to_string(a) + "x" + std::to_string(b));
                }
            }
        }

        cout << ans.size();
        for (const auto& x : ans) {
            cout << " " << x;
        }
        cout << endl;
    }

    return 0;
}
