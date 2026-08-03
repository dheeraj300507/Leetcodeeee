class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        k=k-1;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return nums[k];
    }
};