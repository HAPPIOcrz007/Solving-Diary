#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<long long> a(n);
        for(int i = 0; i < n; i++) std::cin >> a[i];
        std::vector<long long> b;
        b.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1]) b.push_back(a[i]);
        }
        int m = min_element(b.begin(), b.end()) - b.begin();
        bool ok = true;
        for(int i = 0; i < m; i++){
            if(b[i] <= b[i+1]) { ok = false; break; }
        }
        for(int i = m; i+1 < (int)b.size(); i++){
            if(b[i] >= b[i+1]) { ok = false; break; }
        }
        std::cout << (ok ? "YES" : "NO") << std::endl;
    }
    return 0;
}
