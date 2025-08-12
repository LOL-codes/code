#include <iostream>
#include <vector>
using namespace std;

bool safe(vector<vector<char>>&board,string word,int r,int c,int idx){

    if(idx==word.length()) return true;

    if(r<0 || c<0 || r>=board.size() || c>=board[0].size()) return false;

    if(board[r][c]!=word[idx]) return false;

    char temp=board[r][c];
    board[r][c]='#';

    bool found=safe(board,word,r-1,c,idx+1) || safe(board,word,r+1,c,idx+1) || safe(board,word,r,c-1,idx+1) || safe(board,word,r,c+1,idx+1);

    board[r][c]=temp;

    return found;
}

bool exist(vector<vector<char>>&board,string word){
    int r=board.size(),c=board[0].size();

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            if(safe(board,word,i,j,0)){
                return true;
            }
        }
    }

    return false;

}

int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    string word = "ASFDECS";

    if (exist(board, word))
        cout << "Word found!" << endl;
    else
        cout << "Word not found!" << endl;

    return 0;
}