#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n,k;
        cin >> n;
        cin >> k;

        set<int> outside;
        int open = 0;

        for (int i = 0; i < n; i++) {
            int ingredient;
            cin >> ingredient;

            if (outside.find(ingredient) == outside.end()) {
                if (outside.size() == k) {
                    outside.erase(outside.begin());
                }
                outside.insert(ingredient);
                open++;
            }
        }

        cout << open << endl;
    }

    return 0;
}
