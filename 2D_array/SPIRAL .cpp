#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void spiral(vector<vector<int>> &v){

       int left=0;
       int right=v[0].size()-1;
       int top=0;
       int bottom=v.size()-1;

       int dir=0;

       while(left<=right && top<=bottom){

              if(dir==0){
                     for(int i=left; i<=right; ++i){
                            cout << v[top][i] << " ";
                     }
                     ++top;
              }

              else if(dir==1){
                     for(int i=top; i<=bottom; ++i){
                            cout << v[i][right] << " ";
                     }
                     --right;
              }

              else if(dir==2){
                     for(int i=right; i>=left; --i){
                            cout << v[bottom][i] << " ";
                     }
                     --bottom;
              }

              else if(dir==3){
                     for(int i=bottom; i>=top; --i){
                            cout << v[i][left] << " ";
                     }
                     ++left;
              }
              
              dir=(dir+1)%4;
       }
}

int main(){

       vector<vector<int>> v{3,vector<int>(3)}; 
       v={{1,2,3},{4,5,6},{7,8,9}};

       spiral(v);

}