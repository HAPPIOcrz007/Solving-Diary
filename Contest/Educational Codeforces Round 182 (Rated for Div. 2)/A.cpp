#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector <int> a(n,0);
        int sum = 0;
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
            sum += a[i];
        }
        if(sum % 3 == 0){
            std::cout << "1 2" << std::endl;
        }
        else{
            std::cout << "0 0" << std::endl;
        }
    }
    return 0;
}