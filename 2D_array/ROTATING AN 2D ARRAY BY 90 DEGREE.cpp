#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &v){

       //transpose
       for(int i=0; i<v.size(); ++i){
              for(int j=0; j<i; ++j){
                     swap(v[i][j],v[j][i]);
              }
       }

       //reverse
       for(int i=0; i<v.size(); ++i){
              reverse(v[i].begin(),v[i].end());
       }
}

int main(){

       vector<vector<int>> v{3,vector<int>(3)}; 
       v={{1,2,3},{4,5,6},{7,8,9}};

       rotate(v);

       for(int i=0; i<v.size(); ++i){
              for(int j=0; j<v[0].size(); ++j){
                     cout << v[i][j] << " ";
              }
              cout << "\n";
       }

}