#include <bits/stdc++.h>

int main(){
    int d;
    std::cin >> d;
    int n;
    std::cin >> n;
    std::vector <int> a(n,0);
    for(int i = 0; i < n; i++) std::cin >> a[i];

    int adjust = 0;
    for(int i = 0; i < n - 1; i++){
        adjust += d - a[i];
    }
    std::cout << adjust << std::endl;
    return 0;
}