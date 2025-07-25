#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    string ans="";
    int count=1;

    for(int i=1; i<=n.length(); ++i){
        if(n[i]==n[i-1]){
            ++count;
        }
        else{
            ans+=n[i-1];
            if(count>1){
                ans+=to_string(count);
            }
            count=1;
        }
    }

    cout << ans;

}




// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// using namespace std;

// int main(){

//     string n;
//     getline(cin,n);

//     int count=1,k=0;

//     for(int i=1; i<=n.length(); ++i){

//         if(i<n.length() && n[i-1]==n[i]){
//             ++count;
//         }
//         else{

//             n[k++]=n[i-1];
            
//             if(count>1){
//                 string str=to_string(count);
//                 for(char c:str){
//                     n[k++]=c;
//                 }
//             }

//             count=1;
//         }
//     }

//     n.resize(k);

//     cout << n;

// }