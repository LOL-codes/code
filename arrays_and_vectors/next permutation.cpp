#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nextPermutation(vector<int>& nums) {
        
        int piv=-1;
        int n=nums.size();

        for(int i=n-2; i>=0; --i){
            if(nums[i]<nums[i+1]){
                piv=i;
                break;
            }
        }

        if(piv==-1){
            return reverse(nums.begin(),nums.end());
        }

        for(int i=n-1; i>=0; --i){
            if(nums[i]>nums[piv]){  //searching for next greater number
                swap(nums[i],nums[piv]);
                break;
            }
        }

        reverse(nums.begin()+piv+1,nums.end());
        
    }

int main(){

vector<int>arr{1,1,5};
nextPermutation(arr);

for(int i:arr){
    cout << i << " ";
}

//next_permutation(arr.begin(),arr.end());
}