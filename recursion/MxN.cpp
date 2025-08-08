//paths for moving only right and down

#include <iostream>
#include <algorithm>
using namespace std;

int f(int i,int j,int m,int n){
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(i>=m || j>=n){
        return 0;
    }

    return f(i,j+1,m,n)+f(i+1,j,m,n);
}

int main(){
    
    cout << f(0,0,2,3);

}

//paths for moving in all direction

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int f(int i,int j,int n,int m,vector<vector<bool>>&vis){

//     if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==true){
//         return 0;
//     }

//     if(i==n-1 && j==m-1){
//         return 1;
//     }

//     vis[i][j]=true;

//     int t=f(i,j+1,n,m,vis)+f(i+1,j,n,m,vis)+f(i-1,j,n,m,vis)+f(i,j-1,n,m,vis);

//     vis[i][j]=false;

//     return t;
// }

// int main(){

//     int n=2,m=3;

//     vector<vector<bool>>vis(m,vector<bool>(n,false));
    
//     cout << f(0,0,n,m,vis);

// }