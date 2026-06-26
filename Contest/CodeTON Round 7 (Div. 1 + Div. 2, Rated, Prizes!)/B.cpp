#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        int a = count(s.begin(), s.end(), 'A');
        int b = count(s.begin(), s.end(), 'B');

        int ab_pairs = 0;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == 'A' && s[i+1] == 'B') ab_pairs++;
        }
        if(ab_pairs == 0){
            std::cout << 0 << std::endl;
            continue;
        }
        std::cout << std::min({a + ab_pairs - 1, b + ab_pairs - 1, ab_pairs + std::min(a,b) - 1}) << "\n";
    }
    return 0;
}
