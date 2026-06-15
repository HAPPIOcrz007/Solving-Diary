#include <iostream>

int main(){
    std::string s;
    std::cin >> s;
    int max_length = 0, curr = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i -1]){
            curr++;
        }
        else{
            curr = 1;
        }
        max_length = std::max(max_length, curr);
    }
    max_length = std::max(max_length, curr);
    std::cout << max_length << std::endl;
    return 0;
}