https://leetcode.com/problems/rotate-array/description/

// Approach 2
class Solution{
    public:
    void rotate(vector<int>& nums, int k){
        vector<int> v(nums.size());
        for(int i=0;i<nums.size();i++){
            v[(i+k)%nums.size()]=nums[i];  // if size is greater then modulus gives how much index left to rotate
            // if k=6 and size is 4 then after 4 step of rotation array becomes same as original then 2 step i.e, remainder after dividing is left for rotation then we will rotate two steps

            //  k%size i.e, reminder will give effective rotation
        }
        nums=v;
    }
};
// Approach 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k=k%size;  // nums= [-1] and k=2  when k is greater than size
        /*
        k%size like k is 6 and size is 4 then 6%4=2  means after 4 step it become same array then rotate two step
        thats why modulas by size.
        if k is less then same k% size will give k and if greater then the ...
        direct multiply i.e, remainder is 0 means same array got after rotation and the remainder gives how...
        much more to rotate
        */
        if(k!=0){
            reverse(nums.end()-k,nums.end());
            reverse(nums.begin(),nums.end()-k);
            reverse(nums.begin(),nums.end());
        }
    }
};