#include <iostream>
#include <string>
#include <iostream>
#include <vector>

std::vector<int> searchRange(std::vector<int>& nums, int target) {
    std::vector<int> result(2, -1);

    // Binary search for the first occurrence
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        if (nums[mid] == target) {
            result[0] = mid;
        }
    }

    // Binary search for the last occurrence
    left = 0;
    right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        if (nums[mid] == target) {
            result[1] = mid;
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    std::vector<int> result = searchRange(nums, target);
    std::cout << "First and last positions: [" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}
