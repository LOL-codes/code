#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int row,col;
    cout << "enter the number of rows:";
    cin >> row;
    cout << "\nenter the number of columns:";
    cin >> col;

    vector<vector<int>> v{row,vector<int>(col)};

    cout << "\nenter the matrix elements:";
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            cin >> v[i][j];
        }
    }

    cout << "\n";

    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int i=0; i<row; ++i){
        for(int j=v[0].size()-2; j>=0; --j){
            v[j][i]=v[j][i]+v[j+1][i];
        }
    }

    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

}