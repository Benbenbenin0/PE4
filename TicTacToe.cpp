#include <iostream>
#include <vector>
#include <string> 
using namespace std;

std::vector<std::vector<int>> CreateBoard()
{
   return std::vector<std::vector<int>>(3, std::vector<int>(3, 0));
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

main(){
  std::vector<std::vector<int>> board = CreateBoard();
}
