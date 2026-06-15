#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        long long a, b;
        std::cin >> a >> b;
        if ((a + b) % 3 == 0 && std::max(a, b) <= 2 * std::min(a, b)) {
            std::cout << "YES\n";
        }
        else std::cout << "NO\n";
    }
    return 0;
}