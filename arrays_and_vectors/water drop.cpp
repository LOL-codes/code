#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int>a{2, 0, 1, 1, 1, 2, 3, 1, 1};
   int n=a.size();
   vector<int>l(n),r(n);

   l[0]=a[0];
   for(int i=1; i<a.size(); ++i){
      l[i]=max(l[i-1],a[i]);
   }

   r[n-1]=a[n-1];
   for(int i=n-2; i>=0; --i){
      r[i]=max(r[i+1],a[i]);
   }

   int s=0;
   for(int i=0; i<n; ++i){
      int ss=min(l[i],r[i])-a[i];
      s+=ss;
   }

   cout <<s;

}



//water drop(two pointer approch)

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//    vector<int>a{2, 0, 1, 1, 1, 2, 3, 1, 1};
//    int n=a.size();
//    int l=0,r=n-1,sum=0;
//    int lm=0,rm=0;

//    while(l<r){
//       if(a[l]<a[r]){
//          if(a[l]>=lm){
//             lm=a[l];
//          }
//          else{
//             sum+=lm-a[l];
//          }
//          ++l;
//       }
//       else{
//          if(a[r]>=rm){
//             rm=a[r];
//          }
//          else{
//             sum+=rm-a[r];
//          }
//          --r;
//       }
//    }

//    cout <<sum;

// }