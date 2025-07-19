#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

   vector<int>a{-4,-1,-1,0,1,2};
   vector<vector<int>>t;

   int n=a.size();
   sort(a.begin(),a.end());

   for(int i=0; i<n-2; ++i){

      if(i>0 && a[i]==a[i-1]){
         continue;
      }

         int l=i+1,r=n-1;

         while(l<r){
            int s=a[i]+a[l]+a[r];

            if(s==0){
               t.push_back({a[i],a[l],a[r]});
               ++l,--r;
               
            while(l<r && a[l]==a[l-1]) ++l;
            while(l<r && a[r]==a[r+1]) --r; 
            }

            else if(s<0) ++l;
            else --r;
         }
   }

   for(int i=0; i<t.size(); ++i){
      for(int j=0; j<t[0].size(); ++j){
         cout << t[i][j] << " ";
      }
      cout << "\n";
   }

}