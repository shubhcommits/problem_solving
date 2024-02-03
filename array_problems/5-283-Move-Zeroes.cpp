// https://leetcode.com/problems/move-zeroes/
// two pointer approach
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int c=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
                c++;
            }
        }
        for(int i=c;i<n;i++){
            nums[i]=0;
        }
    }
};