#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pal(int n){

    vector<vector<int>>res(n);

    for(int i=0; i<n; ++i){

        res[i].resize(i+1);

        for(int j=0; j<i+1; ++j){
            if(j==0 || j==i){
                res[i][j]=1;
            }
            else{
                res[i][j]=res[i-1][j]+res[i-1][j-1];
            }
        }
    }

    return res;
}

int main(){
    int n=5;
    vector<vector<int>>ans=pal(n);

    for(int i=0; i<ans.size(); ++i){
        for(int j=0; j<ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}