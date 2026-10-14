class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=0,rev2=0;
        int temp=num;
        while(num>0){
            int dig=num%10;
            rev1=rev1*10+dig;
            num=num/10;
        }
        while(rev1>0){
            int dig=rev1%10;
             rev2=rev2*10+dig;
            rev1=rev1/10;
        }
        if(rev2==temp)
            return true;
        return false;
    }
};