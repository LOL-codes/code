#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   vector<int>a{0,1,6,2,5,3}; //it should start from zero
   int n=a.size();
   int s=0;

   int t=(n*(n+1))/2;

   for(int i:a){
      s+=i;
   }

   cout << t-s;
}

//===================================================

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//    vector<int>a{0,1,6,2,5,3}; //it should start from zero
//    int n=a.size();

//    int xornum=0,xorarr=0;
   
//    for(int i=0; i<=n; ++i){
//       xornum^=i;
//    }

//    for(int i:a){
//       xorarr^=i;
//    }

//    int r=xornum^xorarr;

//    cout << r;

// }
