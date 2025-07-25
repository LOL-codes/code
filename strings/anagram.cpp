#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n,nn;
    getline(cin,n);
    cout << "\n";
    getline(cin,nn);

    sort(n.begin(),n.end());
    sort(nn.begin(),nn.end());

    cout << "\n";

    if(n==nn){
        cout << 1;
    }
    else{
        cout  << 0;
    }

}



// #include <iostream>
// #include <algorithm>
// #include <ctype.h>
// #include <string>
// using namespace std;

// int main(){

//     string n,nn;
//     getline(cin,n);
//     cout << "\n";
//     getline(cin,nn);

//     int fre[256]={0};

//     for(int i=0; i<n.length(); ++i){
//         ++fre[n[i]];
//         --fre[nn[i]];
//     }

//     for(int i=0; i<256; ++i){
//         if(fre[i]!=0){
//             cout << 0;
//             return 0;
//         }
//     }

//     cout << 1;
// }
