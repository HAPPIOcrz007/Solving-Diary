#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long l, r;
        std::cin >> l >> r;
        std::cout << (((r + 1) / 2 - l / 2) / 2) << "\n";
    }
    return 0;
}
