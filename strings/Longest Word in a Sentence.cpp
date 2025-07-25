#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n="you look lonely i can fix that";
    n+=' ';
    string w="" ,l="";

    for(char i:n){
        if(i!=' '){
            w+=i;
        }
        else{
            if(w.length()>l.length()){
                l=w;
            }
            w="";
        }
    }

    cout << l;


}