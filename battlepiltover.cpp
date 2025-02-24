#include <iostream>
#include <vector>


std::vector<vector<int>> permut(std::vector<int>array,int n){

  std::vector<vector<int>> all_diferent,possiblevalues;
  char torret = "T";
  char blanks = ".";
  

  if(n==1){
    if (array[n-1]!=blanks)
      return {array[n-1]};
    else
      return {array[n-1],torret};
  }
  
  else{

    possiblevalues = permut(array,n-1);
    for(std::vector<int> i:possiblevalues){

      i.push_back(array[n-1]);
      all_diferent.push_back(i);
      if (array[n-1] == blanks){
        all_diferent.push_back(i.push_back(torret));
      }
    }
  }

  return all_diferent;
}

int main(){

  std::vector<int> A = {0,0};
  std::vector<vector<int>> res = permut(A,2);

  cout<<res.size();

}