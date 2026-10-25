class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int duplicate = n;
        int sum = 0;
        while(n>0){
            
            int lastDigit = n%10;
            sum = sum + (lastDigit*lastDigit*lastDigit);
            n = n/10;
        }
        if(sum == duplicate){
            return 1;
            
        }
        return 0;
    }
};