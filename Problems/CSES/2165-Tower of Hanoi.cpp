#include <iostream>
#include <vector>

void hanoi (int disk, std::vector<std::vector <int>>& moves,
            int source, int destination, int auxilary){
                if(disk == 1){
                    moves.push_back({source, destination});
                    return;
                }
                else{
                    hanoi(disk - 1, moves, source, auxilary, destination);
                    moves.push_back({source, destination});
                    hanoi(disk - 1, moves, auxilary, destination, source);
                }
            }

int main(){
    int disks;
    std::cin >> disks;
    std::vector< std::vector <int>> moves;
    hanoi(disks, moves, 1, 3, 2);
    std::cout << moves.size() << std::endl;
    for (auto move : moves) {
        std::cout << move[0] << " " << move[1] << "\n";
    }
}