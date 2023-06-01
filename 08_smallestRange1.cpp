#include<bits/stdc++.h>
using namespace std;

int smallestRangeI(vector<int>& nums, int k) {
        int maxi=nums[0];
        int mini=nums[0];

        for(auto x: nums){
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        return max(0,maxi-mini-2*k);
    }

int main(){

    vector<int> nums={1};
    int k = 0;
    cout<<smallestRangeI( nums,  k);

}