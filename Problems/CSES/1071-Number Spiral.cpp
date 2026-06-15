#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long y, x;
        std::cin >> y >> x;
        long long ans;
        if (y > x) {
            long long base = (y - 1) * (y - 1);
            if (y % 2 == 1) ans = base + x;
            else ans = base + (2 * y - x);
        } else {
            long long base = (x - 1) * (x - 1);
            if (x % 2 == 0) ans = base + y;
            else ans = base + (2 * x - y);
        }
        std::cout << ans << "\n";
    }
    return 0;
}
