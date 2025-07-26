#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

       vector<int>a{0,0,1,1,1,2,2,3,3,4};

       int n=a.size();
       int j=0;

       for(int i=1; i<n; ++i){
              if(a[i]!=a[j]){
                     ++j;
              }
              a[j]=a[i];
       }

       a.resize(j+1);

       for(int i:a){
              cout << i << " ";
       }
}