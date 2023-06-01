#include<bits/stdc++.h>
using namespace std;
bool isIncreasing(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]) return false;
        }
        return true;
    }

    bool isDecreasing(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]) return false;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        bool increasing=isIncreasing(nums);
        if(increasing) return true;
        bool decreasing=isDecreasing(nums);

        return increasing||decreasing;

        
    }
int main(){
    vector<int> nums={1,2,2,3};
    cout<<isMonotonic(nums);

}