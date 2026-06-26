#include <bits/stdc++.h>

int main(){
    long long t;
    std::cin >> t;
    while(t--){
        long long n;
        std::cin >> n;
        std::vector <long long> a(n,0);
        for(int i = 0; i < n; i++) std::cin >> a[i];
        if(a[0] == 1){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
    return 0;
}