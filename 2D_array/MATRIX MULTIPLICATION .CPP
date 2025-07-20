#include <iostream>
using namespace std;

int main(){

       int r1=2,c1=2;
       int r2=2,c2=2;
       int r3=2,c3=2;

       int arr1[r1][c1]={{1,2},{3,4}};
       int arr2[r2][c2]={{1,2},{3,4}};
       int arr3[r3][c3];

       for(int i=0; i<r1; ++i){
              for(int j=0; j<c2; ++j){
                     int ans=0;
                     for(int k=0; k<r2; ++k){
                            ans+=arr1[i][k]*arr2[k][j];
                     }
                     arr3[i][j]=ans;
              }
       }

       for(int i=0; i<r3; ++i){
              for(int j=0; j<c3; ++j){
                     cout << arr3[i][j] << " ";
              }
              cout << "\n";
       }
}
