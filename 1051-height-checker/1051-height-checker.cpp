class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> nums;
        int sum=0;
        for(int x:heights)
            nums.push_back(x);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=heights[i])
                sum++;
        }
        return sum;
    }
};