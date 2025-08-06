#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool safe(vector<string>&cur,int n,int r,int c){

    //checking for rows
    for(int i=0; i<n; ++i){
        if(cur[r][i]=='Q'){
            return false;
        }
    }
    //checking for columns
    for(int i=0; i<n; ++i){
        if(cur[i][c]=='Q'){
            return false;
        }
    }
    //checking for left diagnol
    for(int i=r,j=c; i>=0 && j>=0; --i,--j){
        if(cur[i][j]=='Q'){
            return false;
        }
    }
    //checking for right diagnol
    for(int i=r,j=c; i>=0 && j<n; --i,++j){
        if(cur[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

void rec(vector<string>&cur,vector<vector<string>>&res,int n,int r){

    if(r==n){
        res.push_back(cur);
        return;
    }

    for(int i=0; i<n; ++i){
        if(safe(cur,n,r,i)){
            cur[r][i]='Q';
            rec(cur,res,n,r+1);
            cur[r][i]='.';
        }
    }
}


int main() {
    int n=4;
    vector<vector<string>> res;
    vector<string> cur(n,string(n,'.'));

    rec(cur,res,n,0);

    for (auto& partition : res) {
        cout << "[ ";
        for (auto& part : partition)
            cout << "\"" << part << "\" ";
        cout << "]\n";
    }
}