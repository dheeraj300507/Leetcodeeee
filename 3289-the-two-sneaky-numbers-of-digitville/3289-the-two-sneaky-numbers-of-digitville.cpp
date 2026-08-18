class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        set<int> st;
        vector<int> ans;
        for(int x:nums){
            if(st.find(x)!=st.end()){
                ans.push_back(x);
            }
            st.insert(x);
        }
        return ans;
    }
};