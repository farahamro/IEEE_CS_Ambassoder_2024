#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct State {
    vector<vector<int>> matrix;
    int moves;
};

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y) {
    return x >= 0 && x < 5 && y >= 0 && y < 5;
}

int bfs(vector<vector<int>> initial) {
    queue<State> q;
    q.push({initial, 0});

    vector<vector<vector<int>>> visited(5, vector<vector<int>>(5, vector<int>(5, -1)));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (initial[i][j] == 1) {
                visited[i][j][0] = 0;
            }
        }
    }

    while (!q.empty()) {
        State state = q.front();
        q.pop();

        if (state.matrix[2][2] == 1) {
            return state.moves;
        }

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (state.matrix[i][j] == 1) {
                    for (int k = 0; k < 4; k++) {
                        int x = i + dx[k];
                        int y = j + dy[k];

                        if (isValid(x, y) && visited[x][y][state.moves + 1] == -1) {
                            vector<vector<int>> nextMatrix = state.matrix;
                            swap(nextMatrix[i][j], nextMatrix[x][y]);
                            q.push({nextMatrix, state.moves + 1});
                            visited[x][y][state.moves + 1] = 0;
                        }
                    }
                }
            }
        }
    }

    return -1;
}

int main() {
    vector<vector<int>> initial(5, vector<int>(5));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> initial[i][j];
        }
    }

    cout << bfs(initial) << endl;

    return 0;
}
