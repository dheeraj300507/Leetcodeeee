class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        int sum=0;
        for(int i=1;i<nums.size();i++){
            sum+=min(nums[i-1],nums[i]);
            i++;
        }
        return sum;
    }
};