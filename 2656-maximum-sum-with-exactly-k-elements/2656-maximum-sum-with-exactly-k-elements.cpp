class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.rbegin(),nums.rend());
        for(int i=1;i<=k;i++){
                 sum+=nums[0];
                nums[0]=nums[0]+1;
        }  
        return sum; 
    }
};