#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);
    string nn=n;

    transform(n.begin(),n.end(),n.begin(), ::tolower);
    
    reverse(n.begin(),n.end());

    if(nn==n){
        cout << "palindrome";
    }
    else{
        cout << "not a palindrome";
    }
}