// 1752. Check if Array Is Sorted and Rotated
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


/*-----------------This is the most apporopirate one--------------------------*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }
};

/***************************************************/
class Solution {
public:
    bool check(vector<int>& nums) {
       int k=-1;
       int n=nums.size();
       for(int i=0;i<n-1;i++){
           if(nums[i]>nums[i+1]){
               k=i+1;
               break;
           }
       } 
       if(k==-1) return true;
       for(int i=k;i<n;i++){
           if(nums[i%n]>nums[(i+1)%n]){
               return false;
           }
       }
       return true;
    }
};