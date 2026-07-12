class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> on(101,0);
        
        for(int x:bulbs){
            on[x]^=1;
        }
        
        vector<int> ans;
        for(int i=1;i<=100;i++){
            if(on[i]) ans.push_back(i);
        }
        
        return ans;
    }
};