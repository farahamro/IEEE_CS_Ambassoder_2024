#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> ratings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> ratings[i].first >> ratings[i].second;
    }

    bool isRated = false;
    bool isUnrated = true;

    for (int i = 0; i < n; ++i) {
        if (ratings[i].first != ratings[i].second) {
            isRated = true;
            break;
        }
        for (int j = i + 1; j < n; ++j) {
            if (ratings[i].first < ratings[j].first) {
                isUnrated = false;
                break;
            }
        }
    }

    if (isRated) {
        std::cout << "rated" << std::endl;
    } else if (isUnrated) {
        std::cout << "unrated" << std::endl;
    } else {
        std::cout << "maybe" << std::endl;
    }

    return 0;
}
