#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{3, 2, 1}, {6, 5, 4},  {8, 7, 9} };

    int r=a.size(),c=a[0].size();

    for(int i=0; i<r; ++i){
        sort(a[i].begin(),a[i].end());
    }

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }


}