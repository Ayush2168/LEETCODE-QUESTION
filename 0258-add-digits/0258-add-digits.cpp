class Solution {
public:
    int addDigits(int num) {
        while( num > 9 ){
        int ans =0;
        int n = num;
        int rem;
        while(n!=0){
            rem=n%10;
            n=n/10;
            ans=ans+rem;
        }
        num = ans;
        cout << num;
        }
    return num;
    }
};