#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    int x;
    cin >> x;

    string r="";

    if(x==0){
        cout << "0";
    }

    while(x>0){
        char d=(x%10)+'0';
        r+=d;
        x/=10;
    }

    reverse(r.begin(),r.end());

    cout << r;

}