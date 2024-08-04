#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<string> cake(r);
    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }

    int rows = 0;
    vector<bool> rowHasStrawberry(r, false);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                rowHasStrawberry[i] = true;
                break;
            }
        }
        if (!rowHasStrawberry[i]) rows++;
    }

    int cols = 0;
    vector<bool> colHasStrawberry(c, false);
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            if (cake[j][i] == 'S') {
                colHasStrawberry[i] = true;
                break;
            }
        }
        if (!colHasStrawberry[i]) cols++;
    }

    int count = 0;

    vector<vector<bool>> eaten(r, vector<bool>(c, false));
    for (int i = 0; i < r; i++) {
        if (!rowHasStrawberry[i]) {
            for (int j = 0; j < c; j++) {
                if (!eaten[i][j] && cake[i][j] == '.') {
                    count++;
                    eaten[i][j] = true;
                }
            }
        }
    }
    for (int i = 0; i < c; i++) {
        if (!colHasStrawberry[i]) {
            for (int j = 0; j < r; j++) {
                if (!eaten[j][i] && cake[j][i] == '.') {
                    count++;
                    eaten[j][i] = true;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
