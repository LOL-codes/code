#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){

    string n=" i am  batman  ";
    int c=0;
    bool in=false;

    for(char i:n){
        if(i!=' '){
            if(!in){
                ++c;
                in=true;
            }
        }
        else{
            in=false;
        }
    }

    cout << c;
}
