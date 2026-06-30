#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        long long n;
        std::cin >> n;
        std::vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            std::cin >> a[i];
        }

        std::pair<long long, long long> maxs, smaxs;
        maxs = {a[0], 0};
        smaxs = {LLONG_MIN, -1};

        for(long long i = 0; i < n; i++){
            if(a[i] >= maxs.first){
                maxs = {a[i], i};
            }
        }
        for(long long i = 0; i < n; i++){
            if(i != maxs.second && a[i] >= smaxs.first){
                smaxs = {a[i], i};
            }
        }

        for(long long i = 0; i < n; i++){
            if(i != maxs.second){
                std::cout << a[i] - maxs.first << " ";
            } else {
                std::cout << a[i] - smaxs.first << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
