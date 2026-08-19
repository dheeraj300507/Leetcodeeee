class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int mx=INT_MIN;
     for(int i=0;i<acc.size();i++){
            int sum=0;
        for(int j=0;j<acc[i].size();j++){
            sum+=acc[i][j];
        }
        if(sum>mx)
            mx=sum;
     }   
     return mx;
    }
};