#include <iostream>
#include <vector>
#include <string> 
using namespace std;

std::vector<std::vector<int>> CreateBoard()
{
   return std::vector<std::vector<int>>(3, std::vector<int>(3, 0));
}
void DisplayBoard(auto board){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void DisplayBoard(std::vector<std::vector<int>> vec){
   for (int i = 0; i < vec.size(); i++)
   {
    for (int j = 0; j < vec[i].size(); j++)
    {
        cout << vec[i][j];
    }
      cout << endl;
   }
}

void PlaceMarker(playerChoice choice, int marker, std::vector<std::vector<int>> vec){
   vec.at(choice.x).at(choice.y) = marker;
}

main(){
  std::vector<std::vector<int>> board = CreateBoard();
}
