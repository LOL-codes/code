#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v{-2,0,-1};

    int lp=1,rp=1;
    int ans=v[0];

    for(int i=0; i<v.size(); ++i){

        lp=lp==0?1:lp;
        rp=rp==0?1:rp;

        lp*=v[i];
        rp*=v[v.size()-i-1];

        ans=max(ans,max(lp,rp));
    }

    cout << ans;
}