#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        printing(nums,ans,temp,0);
        return ans;
    }
    void printing(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        printing(nums,ans,temp,i+1);
        temp.pop_back();
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1])
        {idx++;}
        printing(nums,ans,temp,idx);
    }
};