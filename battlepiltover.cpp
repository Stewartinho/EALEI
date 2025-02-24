#include <iostream>
#include <vector>


std::vector<vector<int>> permut(std::vector<int>,n){

  std::vector<vector<int>> all_diferent;
  std::vector<int> possiblevalues = {0,1};

  if(n==1)
    return {{0},{1}};
  
  else{
    for (int val : possiblevalues){
      for(int vector<int> i : all_diferent){
        i.push_back(val);
        all_diferent.push_back(i);
      }
    }
    return all_diferent;
  }

}

int main(){

  std::vector<int> A = {0,0};
  std::vector<vector<int>> res = permut(A,2);

  cout<<res.size();

}
