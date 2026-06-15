#include <iostream>
#include <vector>
int main(){
    int n;
    std::cin >> n;
    std::vector <long long> a(n);
    for(int i = 0; i < n; i++){
        long long t;
        std::cin >> t;
        a[i] = t;
    }
    long long addons = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i - 1]){
            addons += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
        else{
            continue;
        }
    }
    std::cout << addons << std::endl;
    return 0;
}