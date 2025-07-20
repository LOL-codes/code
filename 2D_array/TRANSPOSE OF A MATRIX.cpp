#include <iostream>
#include <vector>
using namespace std;

int main(){

       int row,col,row1,col1;
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

       if(row==col){
              for(int i=0; i<matrix.size(); ++i){
                     for(int j=0; j<i; ++j){
                            swap(matrix[i][j],matrix[j][i]);
                     }
              }

              cout << "\ntrnaspose of a matrix is given by\n";

              for(int i=0; i<matrix.size(); ++i){
                     for(int j=0; j<matrix[0].size(); ++j){
                            cout << matrix[i][j] << " ";
                     }
                     cout << "\n";
              }
       }
       else{
              row1=col;
              col1=row;
              vector<vector<int>> matrix1(row1,vector<int>(col1));
              
              for(int i=0; i<row1; ++i){
                     for(int j=0; j<col1; ++j){
                            matrix1[i][j]=matrix[j][i];
                     }
              }

              cout << "\ntrnaspose of a matrix is given by\n";

              for(int i=0; i<matrix1.size(); ++i){
                     for(int j=0; j<matrix1[0].size(); ++j){
                            cout << matrix1[i][j] << " ";
                     }
                     cout << "\n";
              }

       }

}