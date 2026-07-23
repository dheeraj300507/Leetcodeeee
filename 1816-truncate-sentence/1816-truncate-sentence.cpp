class Solution {
public:
    string truncateSentence(string s, int k) {
           string ans="";
           int cnt=0;
           for(char ch: s){
            if(ch==' '){
                cnt++;
                if(cnt==k){
                    break;
                }
                ans+=ch;
            }
            else{
                ans+=ch;
            }
           }
           return ans;
    }
};