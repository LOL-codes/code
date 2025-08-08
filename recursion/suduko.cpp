/*

class Solution {
public:

bool safe(vector<vector<char>>&board , int r, int c,char ch){
    
    for(int i=0; i<9; ++i){
        if(board[r][i]==ch){
            return false;
        }
    }

    for(int i=0; i<9; ++i){
        if(board[i][c]==ch){
            return false;
        }
    }

    int rg=(r/3)*3,cg=(c/3)*3;

    for(int i=rg; i<rg+3; ++i){
        for(int j=cg; j<cg+3; ++j){
            if(board[i][j]==ch){
                return false;
            }
        }
    }

    return true;
}

bool rec(vector<vector<char>>&board,int r,int c){
    if(r==9){
        return true;
    }

    int nxtr=r,nxtc=c+1;
    if(nxtc==9){
        nxtr=r+1;
        nxtc=0;
    }

    if(board[r][c]!='.'){
        return rec(board,nxtr,nxtc);
    }

    for(char i='1'; i<='9'; ++i){
        if(safe(board,r,c,i)){
            board[r][c]=i;
            if(rec(board,nxtr,nxtc)){
                return true;
            }
            board[r][c]='.';
        }
    }

    return false;
}

    void solveSudoku(vector<vector<char>>& board) {
        rec(board,0,0);
    }
};

*/