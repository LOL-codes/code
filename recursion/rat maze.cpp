//METHOD 1 USING EXTRA SPACE

#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>>&maze,int r,int c,string s,vector<string>&ans,vector<vector<bool>>&vis){

    int n=maze.size();

    if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || vis[r][c]==true){
        return;
    }

    if(r==n-1 && c==n-1){
        ans.push_back(s);
        return;
    }

    vis[r][c]=true;

    helper(maze,r+1,c,s+"D",ans,vis);
    helper(maze,r-1,c,s+"U",ans,vis);
    helper(maze,r,c-1,s+"L",ans,vis);
    helper(maze,r,c+1,s+"R",ans,vis);

    vis[r][c]=false;
}

vector<string> rec(vector<vector<int>>&maze){
    int n=maze.size();

    vector<string>ans;
    vector<vector<bool>>vis(n,vector<bool>(n,false));
    string s="";
    
    helper(maze,0,0,s,ans,vis);

    return ans;
}

int main(){

    vector<vector<int>>maze{{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string>ans=rec(maze);

    for(string i:ans){
        cout << i << " ";
    }
}
////////////////////////////////////////////////////////////////////////////

//METHOD 2 WITHOUT USING EXTRA SPACE    

// #include <iostream>
// #include <vector>
// using namespace std;

// void helper(vector<vector<int>>&maze,int r,int c,string s,vector<string>&ans){

//     int n=maze.size();

//     if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || maze[r][c]==-1){
//         return;
//     }

//     if(r==n-1 && c==n-1){
//         ans.push_back(s);
//         return;
//     }

//     maze[r][c]=-1;

//     helper(maze,r+1,c,s+"D",ans);
//     helper(maze,r-1,c,s+"U",ans);
//     helper(maze,r,c-1,s+"L",ans);
//     helper(maze,r,c+1,s+"R",ans);

//     maze[r][c]=1;
// }

// vector<string> rec(vector<vector<int>>&maze){
//     int n=maze.size();

//     vector<string>ans;
//     string s="";

//     helper(maze,0,0,s,ans);

//     return ans;
// }

// int main(){

//     vector<vector<int>>maze{{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
//     vector<string>ans=rec(maze);

//     for(string i:ans){
//         cout << i << " ";
//     }
// }