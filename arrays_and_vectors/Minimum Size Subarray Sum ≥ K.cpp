#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int>a{2, 3, 1, 2, 4, 3};
   int k=7;
   int l=0;
   int sum=0,ml=INT_MAX;

   for(int i=0; i<a.size(); ++i){

      sum+=a[i];

      while(sum>=k){
         ml=min(ml,i-l+1);
         sum-=a[l];
         ++l;
      }

   }

   cout << ml;
}