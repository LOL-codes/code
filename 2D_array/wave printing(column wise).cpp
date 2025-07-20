#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{1,2,3},{4,5,6},{7,8,9}};
    
    int r=a.size(),c=a[0].size();

    for(int i=0; i<c; ++i){//represents column
        
        if(i%2==0){
            for(int j=0; j<r; ++j){
                cout << a[j][i] << " ";
            }
        }
        else{
            for(int j=r-1; j>=0; --j){
                cout << a[j][i] << " ";
            }
        }
    }
}