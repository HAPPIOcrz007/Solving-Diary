#include <iostream>
#include <vector>
int main(){
    long long n;
    std::cin >> n;
    std::vector <int> individual(n-1);
    long long sum = ((n)*(n + 1)) / 2;
    for(int i = 0; i < n - 1; i++){
        int t;
        std::cin >> t;
        sum = sum - ((long)t);
    }
    std::cout << sum << std::endl;
}