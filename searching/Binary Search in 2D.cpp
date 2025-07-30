#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{ 1,  3,  5,  7 },{10, 11, 16, 20},{23, 30, 34, 50}};

    int r=a.size(),c=a[0].size();
    int l=0,h=(r*c)-1;
    int t=16;

    while(l<=h){

        int m=(l+h)/2;

        int row=m/c;
        int col=m%c;

        if(a[row][col]==t){
            cout << row << " " << col;
            break;
        }
        if(a[row][col]>t){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
}