#include <iostream>
#include <vector>
using namespace std;



int main(){

       int row,col;
       cout << "enter the number of rows:";
       cin >> row;
       cout << "\nenter the number of columns:";
       cin >> col;

       vector<vector<int>> matrix(row,vector<int>(col));

       cout << "\nenter the elements for your matrix:";
       for(int i=0; i<matrix.size(); ++i){
              for(int j=0; j<matrix[0].size(); ++j){
                     cin >> matrix[i][j];
              }
       }

       cout << "\n";

       for(int i=1; i<matrix.size(); ++i){
              for(int j=0; j<matrix[0].size(); ++j){
                     matrix[i][j]=matrix[i][j]+matrix[i-1][j];
              }
       }

       cout << "\n";

       for(int i=0; i<matrix.size(); ++i){
              for(int j=0; j<matrix[0].size(); ++j){
                     cout << matrix[i][j] << " ";
              }
              cout << "\n";
       }

}