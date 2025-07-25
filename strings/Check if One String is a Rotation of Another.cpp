#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n1="abcde",n2="deabc";

    if(n1.length()!=n2.length()){
        cout << 0;
        return 0;
    }

    string temp=n1+n1;

    if(temp.find(n2) != string::npos){
        cout << 1;
    }else{
        cout << 0;
    } 

}
