class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zeros = 0;

        for(int x : nums){
            if(x == 0)
                zeros++;
            else
                product *= x;
        }

        vector<int> ans;

        for(int x : nums){
            if(zeros > 1)
                ans.push_back(0);
            else if(zeros == 1){
                if(x == 0)
                    ans.push_back(product);
                else
                    ans.push_back(0);
            }
            else
                ans.push_back(product / x);
        }

        return ans;
    }
};