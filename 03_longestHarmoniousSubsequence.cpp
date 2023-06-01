#include<bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int maxi=0;
            int i=0;
            int j=i+1;
            int sz=nums.size();
            while(j<sz){
                while(j<sz &&nums[i]==nums[j]) j++;
                if(j==sz) break;
                int diff=nums[j]-nums[i];
 
                if(diff==1) {
                int index=upper_bound(nums.begin(),nums.end(),nums[j])-nums.begin();
                    maxi=max(maxi,index-i);
   
                }
                
                i=j;
                j=j+1;
 
            }
    
        return maxi;
    }

int main(){
    vector<int> nums={1,3,2,2,5,2,3,7};
    cout<<findLHS(nums);
}