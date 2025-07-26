#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   vector<int>a{1, 2, -3, -4, 5, -6}; 
   int n=a.size();
   vector<int> pos,neg;

   for(int i:a){
      if(i>=0) pos.push_back(i);
      else neg.push_back(i);
   }

   int i=0,po=0,ne=0;

   while(po<n && ne<n){
      a[i++]=pos[po++];
      a[i++]=neg[ne++];
   }

   while(po<n) a[i++]=pos[po++];
   while(ne<n) a[i++]=neg[ne++];

   for(int i:a){
      cout << i << " ";
   }

}