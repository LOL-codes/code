#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){

    vector<vector<int>>intervals = {{1,3},{2,6},{8,10},{15,18}};

         if(intervals.empty()) return {};

    sort(intervals.begin(),intervals.end());

     vector<vector<int>>ans;
     ans.push_back(intervals[0]);

     for(int i=1; i<intervals.size(); ++i){

        if(intervals[i][0]<=ans.back()[1]){
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
        }
     }

     for(auto &i:ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout <<endl;
     }
}