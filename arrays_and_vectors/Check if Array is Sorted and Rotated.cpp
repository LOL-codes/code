#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   vector<int>a{3, 4, 5, 1, 2};
   int n=a.size();

   int c=0;

   for(int i=0; i<n; ++i){
      if(a[i]>a[(i+1)%n]){
         ++c;
      }
   }

   if(c<=1) cout << 1;
   else cout << 0;
}