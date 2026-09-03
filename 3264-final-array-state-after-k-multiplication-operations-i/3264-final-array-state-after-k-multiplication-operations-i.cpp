class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       // sort(nums.begin(),nums.end());
        //int c=0;
        while(k--){
            int pos=min_element(nums.begin(),nums.end())-nums.begin();
            nums[pos]=nums[pos]*multiplier;
        }
        return nums;
    }
};