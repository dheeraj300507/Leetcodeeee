class Solution {
public:
    int finalValueAfterOperations(vector<string>& ope) {
        int ans=0;
        for(int i=0;i<ope.size();i++){
            if(ope[i]=="--X" || ope[i]=="X--")
                ans--;
            else
                ans++;
        }
        return ans;
    }
};