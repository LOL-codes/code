#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{1,2,3},{4,5,6},{7,8,9}};
    
    int r=a.size(),c=a[0].size();

    for(int i=0; i<r; ++i){

        if(i%2==0){
            for(int j=0; j<c; ++j){
                cout << a[i][j] << " ";
            }
        }
        else{
            for(int j=c-1; j>=0; --j){
                cout << a[i][j] << " ";
            }
        }
    }
}
