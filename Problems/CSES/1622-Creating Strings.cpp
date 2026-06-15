#include <bits/stdc++.h>

void Swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

std::set<std::string> result;

void permute(std::string &s, int l, int r) {
    if (l == r) {
        result.insert(s);
        return;
    }
    for (int i = l; i <= r; i++) {
        // Skip duplicate swaps
        bool shouldSwap = true;
        for (int j = l; j < i; j++) {
            if (s[j] == s[i]) {
                shouldSwap = false;
                break;
            }
        }
        if (!shouldSwap) continue;

        Swap(s[l], s[i]);
        permute(s, l + 1, r);
        Swap(s[l], s[i]);
    }
}

int main() {
    std::string s;
    std::cin >> s;
    sort(s.begin(), s.end()); // start sorted

    permute(s, 0, s.size() - 1);

    std::cout << result.size() << "\n";
    for (auto &p : result) {
        std::cout << p << "\n";
    }
    return 0;
}
