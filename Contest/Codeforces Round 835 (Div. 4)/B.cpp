#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::string s;
        std::cin >> n >> s;
        int max_char = 1;
        char try_char = 'a';
        for(int i = 0; i < n; i++){
            max_char = std::max(max_char, (int)s[i] - (int)try_char + 1);
        }
        std::cout << max_char << std::endl;
    }
    return 0;
}