#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        std::vector<int> a(n), b(n), ans(n), aid(n);

        for (int i = 0; i < n; i++) std::cin >> a[i];
        for (int i = 0; i < n; i++) std::cin >> b[i];

        std::iota(aid.begin(), aid.end(), 0);
        std::sort(aid.begin(), aid.end(), [&](int l, int r) {
            return a[l] < a[r];
        });

        sort(b.begin(), b.end());

        for (int i = 0; i < x; i++) {
            ans[aid[n - x + i]] = b[i];
        }
        
        for (int i = x; i < n; i++) {
            ans[aid[i - x]] = b[i];
        }

        int beauty = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > ans[i]) beauty++;
        }

        if (beauty == x) {
            std::cout << "YES\n";
            for (int i = 0; i < n; i++) {
                std::cout << ans[i] << " ";
            }
            std::cout << "\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
