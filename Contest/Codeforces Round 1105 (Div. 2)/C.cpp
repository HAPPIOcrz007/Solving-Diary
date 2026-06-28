#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int xr = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            xr ^= a[i];
        }
        
        if (xr == 0 || n == 1) {
            cout << 0 << "\n";
            continue;
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] ^ xr) < a[i]) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}