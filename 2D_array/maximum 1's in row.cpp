#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{0, 1, 1}, {1, 1, 1},  {1, 0, 0} };

    int r=a.size(),c=a[0].size();
    int i=0,j=c-1;
    int m=-1;


    while(i<r && j>=0){
        if(a[i][j]==1){
            m=i;
            --j;
        }
        else{
            ++i;
        }
    }

    cout << m;
}