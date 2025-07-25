#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);

    int r=0;

    for(int i=0; i<n.length(); ++i){
        if(n[i]>='0' && n[i]<='9'){
            r=r*10+(n[i]-'0');
        }
        else{
            break;
        }
    }

    cout << r;

}
