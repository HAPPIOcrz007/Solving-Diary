#include <iostream>

namespace custom{
    int solve(std::string &s, int l, int k){
        int longest_chain = 1;
        int current_cain  = 1;
        if(l == 1 )
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        int l, k;
        std::cin >> l >> k >> s;
        int ans = custom::solve(s, l, k);
    }
    return 0;
}