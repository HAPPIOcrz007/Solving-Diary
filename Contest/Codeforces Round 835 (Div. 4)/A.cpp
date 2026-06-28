#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int a[3];
        std::cin >> a[0] >> a[1] >> a[2];
        std::sort(a, a + 3);
        std::cout << a[1] << std::endl;
    }
    return 0;
}