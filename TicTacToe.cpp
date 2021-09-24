#include <iostream>
#include <vector>
#include <string> 
using namespace std;

std::vector<std::vector<int>> CreateBoard()
{
   return std::vector<std::vector<int>>(3, std::vector<int>(3, 0));
}

main(){
  std::vector<std::vector<int>> board = CreateBoard();
}
