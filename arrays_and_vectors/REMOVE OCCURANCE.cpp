#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

       vector<int>a{3, 2, 2, 3};

       int n=a.size();
       int j=0,val=3;

       for(int i=0; i<n; ++i){
              if(a[i]!=val){
                     a[j]=a[i];
                     ++j;
              }
       }

       a.resize(j);

       for(int i:a){
              cout << i << " ";
       }
}