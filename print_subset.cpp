#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        printingsubsets(nums,ans,temp,0);
        return ans;
    }
    void printingsubsets(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int  i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        printingsubsets(nums,ans,temp,i+1);
        temp.pop_back();
        printingsubsets(nums,ans,temp,i+1);
        
    }

};