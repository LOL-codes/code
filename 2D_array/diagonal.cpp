#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>>a{{1,2,3},{4,5,6},{7,8,9}};
    
    int n=a.size();

    cout << "primary:";
    for(int i=0; i<n; ++i){
        cout << a[i][i] << " ";
    }
    cout << "\n";

    cout << "\nsecondary:";
    for(int i=0; i<n; ++i){
        cout << a[i][n-i-1] << " ";
    }
}
