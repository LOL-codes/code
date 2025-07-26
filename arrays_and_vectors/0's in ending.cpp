#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   vector<int>a{0, 1, 0, 2, 0, 3, 0, 4};
   int n=a.size();

   int j=0;
   
   for(int i=0; i<n; ++i){
      if(a[i]!=0){
         a[j++]=a[i];
      }
   }
   while(j<n){
      a[j++]=0;
   }

   for(int i:a){
      cout << i << " ";
   }

}