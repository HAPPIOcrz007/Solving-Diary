#include <bits/stdc++.h>

 
signed main() {
	int tc, n;
    std::cin >> tc;
	while (tc--) {
		std::string s;
        std::cin >> n >> s;
        s = ' ' + s + 'C';
		int pt1 = 1, pt2 = 1, ans = 0;
		while (s[pt1] == 'B') ++pt1, ++pt2;
		while (pt1 <= n) {
			int cntA = 0, cntB = 0;
			while (s[pt2] == 'A') ++pt2, ++cntA;
			while (s[pt2] == 'B') ++pt2, ++cntB;
			if (s[pt2 - 1] == 'B') ans += pt2 - pt1 - 1;
			if (cntB) pt1 = pt2 - 1;
			else break;
		}
		std::cout << ans << '\n';
	}
}