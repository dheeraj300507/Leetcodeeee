class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int temp=n;
        while(temp>0){
            int digit=temp%10;
            prod*=digit;
            temp/=10;
        }
        temp=n;
        while(temp>0){
            int digit=temp%10;
            sum+=digit;
            temp/=10;
        }
        return prod-sum;
    }

};