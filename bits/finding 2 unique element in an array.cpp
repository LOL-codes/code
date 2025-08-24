#include <iostream>
#include <vector>
using namespace std;

pair<int,int> unq(vector<int>&arr){

    int XOR=0;

    for(int i:arr){
        XOR^=i;
    }

    int rms=(XOR & -XOR);//it will give you the right most bit

    int x=0,y=0;

    for(int i:arr){

        if(i & rms){
            x^=i;
        }
        else{
            y^=i;
        }
    }

    return {x,y};

}

int main(){

    vector<int>arr{2, 4, 7, 9, 2, 4};

    auto ans=unq(arr);

    cout << ans.first << " " << ans.second;

}