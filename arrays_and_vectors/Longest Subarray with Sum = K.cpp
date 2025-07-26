#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int>a{1, 1, 1, 2, 3, 1, 1};
   int k=5;
   int l=0,r=0;
   int sum=0,ml=0;

   while(r<a.size()){

      sum+=a[r];

      while(sum>k){
         sum-=a[l];
         ++l;
      }

      if(sum==k){
         ml=max(ml,r-l+1);
      }

      ++r;
   }

   cout << ml;
}