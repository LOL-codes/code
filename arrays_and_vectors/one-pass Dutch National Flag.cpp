#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int>a{2, 0, 1, 1, 0, 2};
   int n=a.size();

   int c0=0,c1=0,c2=0,i=0;
   for(int i:a){
      if(i==0) ++c0;
      if(i==1) ++c1;
      else ++c2;
   }

   while(c0--) a[i++]=0;
   while(c1--) a[i++]=1;
   while(c2--) a[i++]=2;

   for(int i:a){
      cout << i << " ";
   }

}

//--------------------------------------------------------------

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//    vector<int>a{2, 0, 1, 1, 0, 2};
//    int n=a.size();

//    int l=0,r=n-1,m=0;

//    while(m<=r){
//       if(a[m]==0){
//          swap(a[m],a[l]);
//          ++l,++m;
//       }
//       else if(a[m]==1){
//          ++m;
//       }
//       else{
//          swap(a[m],a[r]);
//          --r;
//       }
//    }

//    for(int i:a){
//       cout << i << " ";
//    }

// }