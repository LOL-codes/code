/*

class Solution {
public:

bool rec(vector<vector<int>>&grid, int r, int c, int n,int ex){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=ex){
        return false;
    }
    
    if(ex==(n*n)-1){
        return true;
    }

    int a1=rec(grid,r-2,c+1,n,ex+1);
    int a2=rec(grid,r-1,c+2,n,ex+1);
    int a3=rec(grid,r+1,c+2,n,ex+1);
    int a4=rec(grid,r+2,c+1,n,ex+1);
    int a5=rec(grid,r+2,c-1,n,ex+1);
    int a6=rec(grid,r+1,c-2,n,ex+1);
    int a7=rec(grid,r-1,c-2,n,ex+1);
    int a8=rec(grid,r-2,c-1,n,ex+1);

    return a1 || a2 || a3 || a4 || a5 || a6 || a7 || a8;
}


    bool checkValidGrid(vector<vector<int>>& grid) {
        return rec(grid,0,0,grid.size(),0);
    }
};

*/