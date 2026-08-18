class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        
        int mx=0;
        for(int i=0;i<sen.size();i++){
            string s=sen[i];
            int wrds=1;
            for(int j=0;j<s.length();j++){
                if(s[j]==' ')
                    wrds++;
            }
            mx=max(wrds,mx);
        }
        return mx;
    }
};