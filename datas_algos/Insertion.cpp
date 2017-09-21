//Implementation of insertion sort =)
//    



#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

void swap(std::vector<int> &vec,int i, int j){
 
  int temp;
  temp = vec.at(i);
  vec.at(i)=vec.at(j);
  vec.at(j)=temp;
}



int main(){
  
  vector<int> data(100000);
  for(auto &x: data) x=std::rand();
  
          // i is the location of the key 
  for(int i=1;i<data.size();i++){
    for(int j=i; j>0;j--){
      // if the key is not at the right place swap it, otherwise iterate to the next key
      if( data.at(j) < data.at(j-1) ){ swap(data,j,j-1);}
      else { break;}
        
    }
  }
  
  for(auto x:data) std::cout<<x<<'\n';
      
  return 0;
}
