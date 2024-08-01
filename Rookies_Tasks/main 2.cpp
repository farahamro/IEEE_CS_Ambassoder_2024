#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(std::string s) {
    // Remove non-alphanumeric characters and convert to lowercase
    std::string filtered;
    for (char c : s) {
        if (std::isalnum(c)) {
            filtered += std::tolower(c);
        }
    }

    // Check if the filtered string is a palindrome
    int left = 0;
    int right = filtered.size() - 1;

    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}

int main() {
    std::string s = "A man, a plan, a canal: Panama";
    if (isPalindrome(s)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

