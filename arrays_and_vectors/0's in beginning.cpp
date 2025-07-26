#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   vector<int>a{0, 1, 0, 2, 0, 3, 0, 4};
   int n=a.size();

   int j=n-1;
   
   for(int i=n-1; i>=0; --i){
      if(a[i]!=0){
         a[j--]=a[i];
      }
   }
   while(j>=0){
      a[j--]=0;
   }

   for(int i:a){
      cout << i << " ";
   }

}