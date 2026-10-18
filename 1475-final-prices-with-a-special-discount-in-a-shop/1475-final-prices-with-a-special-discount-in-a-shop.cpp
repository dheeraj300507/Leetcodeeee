class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int idx=0;
        int flag=0;
        for(int i=0;i<prices.size();i++){
                for(int j=i+1;j<prices.size();j++){
                    if(prices[j]<=prices[i]){
                        ans.push_back(prices[i]-prices[j]);
                        flag=1;
                        break;
                    }
                }
                    if(flag==0)
                        ans.push_back(prices[i]);
                    flag=0;
                           
        }
        return ans;
    }
};