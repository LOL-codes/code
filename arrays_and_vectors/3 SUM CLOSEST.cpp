#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

   vector<int>a{-1, 2, 1, -4};
   int n=a.size();
   int t=1;
   int closestsum=a[0]+a[1]+a[2];

   for(int i=0; i<n-2; ++i){
      for(int j=i+1; j<n-1; ++j){
         for(int k=j+1; k<n; ++k){
            int currentsum=a[i]+a[j]+a[k];
            if(abs(currentsum-t)<abs(closestsum-t)){
               closestsum=currentsum;
            }
         }
      }
   }

   cout << closestsum;

}

//METHOD 2

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){

//    vector<int>a{-1, 2, 1, -4};
//    sort(a.begin(),a.end());
//    int n=a.size();
//    int t=1;
//    int closestsum=a[0]+a[1]+a[2];

//    for(int i=0; i<n-2; ++i){

//       int l=i+1,r=n-1;

//       while(l<r){

//          int currentsum=a[i]+a[l]+a[r];

//          if(abs(currentsum-t)<abs(closestsum-t)){
//             closestsum=currentsum;
//          }

//          if(currentsum>t){
//             --r;
//          }
//          else if(currentsum<t){
//             ++l;
//          }
//          else{
//             return t;
//          }
//       }

//    }

//    cout << closestsum;

// }