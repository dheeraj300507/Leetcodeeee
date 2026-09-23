class Solution {
public:
    int minimumChairs(string s) {
        int chairs=0,ppl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='E'){
                ppl++;
                if(chairs<ppl)
                    chairs++;
            }
            else{
                ppl--;
            }
        }
        return chairs;
    }
};