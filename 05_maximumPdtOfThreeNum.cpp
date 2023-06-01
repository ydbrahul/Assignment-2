#include<bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

         int ans=1;
         ans=max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);

         return ans;
    }

int main(){
    vector<int> nums={1,2,3};
    cout<<maximumProduct(nums);
}