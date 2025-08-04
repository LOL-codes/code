#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool fuc(string &n1,string &n2){
    int i=0,j=0;

    while(i<n1.length() && j<n2.length()){
        if(n1[i]==n2[j]){
            ++i,++j;
        }
        else{
            ++j;
        }
    }

    return i==n1.length();
}

int main(){

    string n1,n2;
    getline(cin,n1);
    getline(cin,n2);

    cout << (fuc(n1,n2)?1:0);


}