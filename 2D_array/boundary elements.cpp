#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{1,2,3},{4,5,6},{7,8,9}};
    
    int r=a.size();
    int c=a[0].size();

    for(int i=0; i<c; ++i){
        cout << a[0][i] << " ";
    }

    for(int i=1; i<r; ++i){
        cout << a[i][c-1] << " ";
    }

    for(int i=c-2; i>=0; --i){
        cout << a[r-1][i] << " ";
    }

    for(int i=r-2; i>0; --i){
        cout << a[i][0] << " ";
    }
}