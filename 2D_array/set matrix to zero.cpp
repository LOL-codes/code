#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{ { 1,  3,  5,  7},
                          {10, 0, 0, 20},
                          {23, 30, 34, 50}};

    int r=a.size(),c=a[0].size();
    bool fr=false,fc=false;

    for(int i=0; i<c; ++i){
        if(a[0][i]==0) fr=true;
    }

    for(int i=0; i<r; ++i){
        if(a[i][0]==0) fc=true;
    }

    for(int i=1; i<r; ++i){
        for(int j=1; j<c; ++j){
            if(a[i][j]==0){
                a[0][j]=0;
                a[i][0]=0;
            }
        }
    }

    for(int i=1; i<r; ++i){
        for(int j=1; j<c; ++j){
            if(a[i][0]==0 || a[0][j]==0){
                a[i][j]=0;
            }
        }
    }

    if(fr){
        for(int i=0; i<c; ++i){
            a[0][i]=0;
        }
    }

    if(fc){
        for(int i=0; i<r; ++i){
            a[i][0]=0;
        }
    }

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}