#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int maxi=n/2;
         
        unordered_set<int> st;


        for(auto x: candyType){
            st.insert(x);
        }

        if(st.size()>maxi) return maxi;


        return st.size();
 
    }
int main(){
    vector<int> candyType={1,1,2,2,3,3};
    cout<<distributeCandies(candyType);

}