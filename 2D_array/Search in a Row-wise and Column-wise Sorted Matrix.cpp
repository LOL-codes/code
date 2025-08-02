#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{11, 12, 13},{21, 22, 23},{31, 32, 33}};

    int r=a.size(),c=a[0].size();
    int i=0,j=c-1;
    int t=23;

    while(i<r && j>=0){

        if(a[i][j]==t){
            cout << i << " " << j;
            break;
        }
        else if(a[i][j]>t){
            --j;
        }
        else{
            ++i;
        }
    }
}