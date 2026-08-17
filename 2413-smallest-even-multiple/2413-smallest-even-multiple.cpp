class Solution {
public:
    int smallestEvenMultiple(int n) {
        bool val=true;
        int num=2;
        while(val){
            if(num%2==0 && num%n==0)
                return num;
            num++;
        }
        return 1;
    }
};