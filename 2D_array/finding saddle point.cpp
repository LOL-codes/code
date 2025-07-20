#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{11, 12, 13},{21, 22, 23},{31, 32, 33}};
    
    int r=a.size();
    int c=a[0].size();

    for(int i=0; i<r; ++i){

        int m=a[i][0];
        int col=0;

        for(int j=0; j<c; ++j){
            if(a[i][j]<m){
                m=a[i][j];
                col=j;
            }
        }

        bool s=true;

        for(int k=0; k<r; ++k){
            if(a[k][col]>m){
                s=false;
                break;
            }
        }

        if(s){
            cout << m;
            break;
        }
    }
}
