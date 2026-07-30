class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        int i=0;
        int j=i+1;
       // cout<<s[i]-s[j];
        while(j<s.size()){
            ans+=abs(s[i]-s[j]);
            i++;
            if(j<s.size())
            j++;
        }
        return ans;
    }
};