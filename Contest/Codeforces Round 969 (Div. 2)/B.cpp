#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        int v = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            v = std::max(v, x);
        }
        for (int j = 0; j < m; j++) {
            char c;
            int l, r;
            std::cin >> c >> l >> r;
            if (l <= v && v <= r) {
                if (c == '+') {
                    v = v + 1;
                } else {
                    v = v - 1;
                }
            }
            std::cout << v;
            if (j != m - 1) std::cout << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
