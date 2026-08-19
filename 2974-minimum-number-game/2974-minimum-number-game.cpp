class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int x:nums)
            pq.push(x);
        while(pq.size()!=0){
            int mx1=pq.top();
            pq.pop();
            int mx2=pq.top();
            pq.pop();
            ans.push_back(mx2);
            ans.push_back(mx1);
        }
        return ans;
    }
};