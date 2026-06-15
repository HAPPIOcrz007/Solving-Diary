#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    int freq[26] = {0};
    for (char c : s) {
        freq[c - 'A']++;
    }
    int odd_count = 0;
    int odd_char_index = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_char_index = i;
        }
    }
    if (odd_count > 1) {
        std::cout << "NO SOLUTION" << std::endl;
        return 0;
    }
    std::string left_half = "";
    std::string right_half = "";
    std::string middle = "";
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            middle += (char)('A' + i);
        }
        for (int k = 0; k < freq[i] / 2; k++) {
            left_half += (char)('A' + i);
        }
    }
    right_half = left_half;
    reverse(right_half.begin(), right_half.end());
    std::cout << left_half + middle + right_half << std::endl;
    return 0;
}   