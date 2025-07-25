#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool che(string &n1,string &n2){
        if(n1.length()!= n2.length()){
        return false;
    }

    int map1[256]={0};
    int map2[256]={0};

    for(int i=0; i<n1.length(); ++i){
        if(map1[n1[i]]!=map2[n2[i]]){
            return false;
        }
        map1[n1[i]]=i+1;
        map2[n2[i]]=i+1;
    }

    return true;
}
int main(){

    string n1,n2;
    getline(cin,n1);
    getline(cin,n2);

    if(che(n1,n2)){
        cout << 1;
    }
    else{
        cout <<0;
    }


}