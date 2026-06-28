#include <bits/stdc++.h>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long n, k;
        std::cin >> n >> k;
        if (k >= n) {
            std::cout << n << std::endl;
            continue;
        }
        long long ans = 0;
        for (int bit = 0; bit < 60; bit++) {
            long long val = 1LL << bit;
            long long cnt = std::min(k, n / val);
            ans += cnt;
            n -= cnt * val;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
