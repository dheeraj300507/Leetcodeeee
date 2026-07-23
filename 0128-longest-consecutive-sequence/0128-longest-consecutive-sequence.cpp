class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int count=0;
        int ans=0;
        for(int x:nums){
          s.insert(x);
    }
    for(int x:s){
        if(s.find(x-1)!=s.end()){
            continue;
        }
        else{
            while(s.find(x)!=s.end()){
                x++;
                count++;
            }
            ans=max(count,ans);
            count=0;
        }
    }
    return ans;
    }

};