#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){

    int n;
    cout << "enter:";
    cin >> n;
    cin.ignore();

    vector<string>a(n);

    for(int i=0; i<n; ++i){
        getline(cin,a[i]);
    }

    string pre=a[0];

    for(int i=1; i<n; ++i){
        int j=0;

        while(j<pre.length() && j<a[i].length() && pre[j]==a[i][j]){
            ++j;
        }

        pre=pre.substr(0,j);
        if(pre=="") break;
    }

    cout << "\n" << "prefix:" << pre;

}