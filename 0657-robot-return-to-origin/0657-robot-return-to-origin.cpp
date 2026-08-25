class Solution {
public:
    bool judgeCircle(string s) {
        int lc=0;
        int rc=0;
        int uc=0;
        int dc=0;  
        for(char c:s){
            if(c=='U')
                uc++;
            else if(c=='D')
                dc++;
            else if(c=='L')
                lc++;
            else
                rc++;
        }
        if(lc==rc && uc==dc)
            return true;
        return false;
    }
};