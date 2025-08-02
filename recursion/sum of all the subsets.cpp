#include <iostream>
#include <vector>
using namespace std;

void rec(vector<int>&ar,vector<int>&res,int i,int s){
    if(i==ar.size()){
        res.push_back(s);
        return;
    }

    rec(ar,res,i+1,s+ar[i]);
    rec(ar,res,i+1,s);
}

int main(){
    vector<int>ar{2,4};
    vector<int>res;

    rec(ar,res,0,0);

    for(int i:res){
        cout << i << " ";
    }
}