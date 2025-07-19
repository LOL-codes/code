#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

       vector<int>result{-1,-1},nums{5,5,6,7,7,8,8,8,8};

       int n=nums.size(),target =5;
        // First occurrence
        int st = 0, ed = n - 1;
        while (st <= ed) {
            int m = st + (ed - st) / 2;
            if (nums[m] < target) {
                st = m + 1;
            } else {
                ed = m - 1;
            }
            if (nums[m] == target)
                result[0] = m;
        }

        // Last occurrence
        st = 0, ed = n - 1;
        while (st <= ed) {
            int m = st + (ed - st) / 2;
            if (nums[m] > target) {
                ed = m - 1;
            } else {
                st = m + 1;
            }
            if (nums[m] == target)
                result[1] = m;
        }

       for(int i:result){
              cout << i << " ";
       }
}