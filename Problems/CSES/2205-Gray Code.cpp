#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    [[assume (n >= 1 && n <= 16)]];
    for(int i = 0; i < (1 << n); i++){
        int gray = i ^ (i >> 1);
        std::string s;
        for(int j = n - 1; j >= 0; j--){
            s.push_back((gray & (1 << j)) ? '1' : '0');
        }
        std::cout << s << std::endl;
    }
    return 0;
}