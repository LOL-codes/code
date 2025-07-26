#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int>a{2,1,5,1,3,2};
   int m=INT_MIN,k=3;
   for(int i=0; i<=a.size()-k; ++i){
      int s=0;
      for(int j=i; j<i+k; ++j){
         s+=a[j];
      }
      m=max(s,m);
      cout << s << " ";
   }
   cout << m;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//    vector<int>a{2,1,5,1,3,2};
//    int ws=0,ms=0,k=2;

//    for(int i=0; i<k; ++i){
//       ws+=a[i];
//    }

//    for(int i=k; i<a.size(); ++i){
//       ws+=a[i]-a[i-k];
//       ms=max(ws,ms);
//    }

//    cout << ms;
// }