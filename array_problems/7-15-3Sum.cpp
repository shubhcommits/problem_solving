// https://leetcode.com/problems/3sum/description/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;  // not taking dublicate
            int target=-nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    res.push_back({nums[i],nums[j],nums[k]});
                    // to not take dublicate like if [-1,-1,0,1,2,-1,-4] -1 comes two time it give same triplet
                    while(j<k&&nums[j]==nums[j+1]){j++;}
                    while(j<k&&nums[k]==nums[k-1]){k--;}
                    j++;
                    k--;
                }
                else if(target>nums[j]+nums[k]){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return res;
    }
};