//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;

        vector<int> cpy=nums; 

        sort(nums.begin(), nums.end());

        vector<int> result;

        while(start<end)
        {
            int temp_sum=nums[start]+nums[end];

            if(temp_sum==target)
            {
                for(int i=0; i<cpy.size(); i++)
                {
                    if(nums[start]==cpy[i])
                        result.push_back(i);
                    else if(nums[end]==cpy[i])
                        result.push_back(i);

                    if(result.size()==2)
                        break;
                };
                break;
            }
            else if(temp_sum<target)
                start++;
            else 
                end--;
        }

        return result;
    }
};