#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string n1;
    getline(cin,n1);

    int vowels=0,consonents=0;

    for(char i:n1){
        if(isalpha(i)){
            char c=tolower(i);
            if(c=='a' || c== 'e' || c=='i' || c=='o' || c=='u'){
                ++vowels;
            }
            else{
                ++consonents;
            }

        }
    }

    cout << vowels << " " << consonents;


}