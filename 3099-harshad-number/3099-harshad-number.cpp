class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int n) {
        int temp=n;
        int sum=0;
        while(temp>0){
            int digit=temp%10;
            sum+=digit;
            temp/=10;
        }
        if(n%sum==0){
            return sum;
        }
        return -1;
    }
};