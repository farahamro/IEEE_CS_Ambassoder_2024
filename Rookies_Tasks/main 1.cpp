#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> replaceElements(std::vector<int>& arr) {
    int n = arr.size();
    int max_from_right = -1;

    for (int i = n - 1; i >= 0; --i) {
        int temp = arr[i];
        arr[i] = max_from_right;
        max_from_right = std::max(max_from_right, temp);
    }

    return arr;
}

int main() {
    std::vector<int> arr = {17, 18, 5, 4, 6, 1};
    std::vector<int> result = replaceElements(arr);

    for (int val : result) {
        std::cout << val << " ";
    }

    return 0;
}
