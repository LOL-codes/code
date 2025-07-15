#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    vector<int> profit={7,1,5,3,6,4};
    int maxprice=0,bestbuy=profit[0];
    for(int i=1; i<profit.size(); ++i){
        if(profit[i]>bestbuy){
            maxprice=max(maxprice,profit[i]-bestbuy);
        }
        bestbuy=min(bestbuy,profit[i]);
    }
    cout << maxprice;
}




// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//    vector<int>a{7, 1, 5, 3, 6, 4}; 
//    int n=a.size();
//    int profit=0,minbuy=INT_MAX;

//    for(int i:a){
//       if(i<minbuy){
//          minbuy=i;
//       }
//       else{
//          profit=max(profit,i-minbuy);
//       }
//    }

//    cout << profit;

// }