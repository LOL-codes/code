#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lol(vector<int> &v,int i,int n){

    if(i==n-1){
        return v[i];
    }

    return v[i]+lol(v,i+1,n);
}

int main(){
    vector<int> v{1,2,3,4,5};
    cout << lol(v,0,v.size());
}