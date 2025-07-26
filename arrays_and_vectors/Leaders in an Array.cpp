#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   vector<int>a{16, 17, 4, 3, 5, 2};
   int n=a.size();

   for(int i=0; i<n; ++i){
      bool l=true;
      for(int j=i+1; j<n; ++j){
         if(a[i]<a[j]){
            l=false;
         }
      }
      if(l){
         cout << a[i] << " ";
      }
   }
}

//--------------------------------------------------------------

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//    vector<int>a{16, 17, 4, 3, 5, 2};
//    int n=a.size();
//    int mr=a[n-1];

//    cout << mr << " ";

//    for(int i=n-2; i>=0; --i){
//       if(a[i]>mr){
//          mr=a[i];
//          cout << mr << " ";
//       }
//    }
// }