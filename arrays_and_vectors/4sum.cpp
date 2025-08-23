#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int>arr{-2,-1,-1,1,1,2,2};
    int t=0;
    vector<vector<int>>ans;
    int n=arr.size();

    //sort

    for(int i=0; i<n; ++i){

        if(i>0 && arr[i]==arr[i-1]) continue; 

        for(int j=i+1; j<n;){

            int p=j+1, q=n-1;

            while(p<q){
                int sum=arr[i]+arr[j]+arr[p]+arr[q];

                if(sum<t){
                    ++p;
                }
                else if(sum>t){
                    --q;
                }
                else{
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    ++p,--q;

                    while(p<q && arr[p]==arr[p-1]) ++p; 
                }
            }

            ++j;
            while(j<n && arr[j]==arr[j-1]) ++j;
        }

    }

    for(auto &i:ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }


}