#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>>  spiral(int n){

       vector<vector<int>> v{n,vector<int>(n)};

       int left=0;
       int right=n-1;
       int top=0;
       int bottom=n-1;

       int dir=0;
       int num=1;

       while(left<=right && top<=bottom){

              if(dir==0){
                     for(int i=left; i<=right; ++i){
                            v[top][i]=num;
                            ++num;
                     }
                     ++top;
              }

              else if(dir==1){
                     for(int i=top; i<=bottom; ++i){
                            v[i][right]=num;
                            ++num;
                     }
                     --right;
              }

              else if(dir==2){
                     for(int i=right; i>=left; --i){
                            v[bottom][i]=num;
                            ++num;
                     }
                     --bottom;
              }

              else if(dir==3){
                     for(int i=bottom; i>=top; --i){
                            v[i][left]=num;
                            ++num;
                     }
                     ++left;
              }

              dir=(dir+1)%4;
       }
       return v;
       
}

int main(){

       int n;
       cout << " enter the number:";
       cin >> n;
       vector<vector<int>> v{n,vector<int>(n)};

       v=spiral(n);

       for(int i=0; i<v.size(); ++i){
              for(int j=0; j<v[0].size(); ++j){
                     cout << v[i][j] << "\t";
              }
              cout << "\n";
       }
}
