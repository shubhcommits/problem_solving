// 2966. Divide Array Into Arrays With Max Difference
// https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/?envType=daily-question&envId=2024-02-01
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> v1;
        vector<vector<int>> res;
        int mx=nums[0]; //variable name should be min as differnce will take with min element in array of 3 elements
        v1.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]-mx)<=k){
                v1.push_back(nums[i]);
                if(nums[i]<mx){  // difference of any-> any two of all elements
                    mx=nums[i];
                }
            }
            else{
                res.clear();
                return res; 
            }
            if(v1.size()==3){
                res.push_back(v1);
                v1.clear();
                if(i!=nums.size()-1){
                    mx=nums[i+1];
                }
            }
        }
        return res;
    }
};