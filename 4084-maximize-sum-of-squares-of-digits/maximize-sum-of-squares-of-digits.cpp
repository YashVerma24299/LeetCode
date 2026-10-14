class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if(num*9 <sum) return ans;

        while(num--){
            if(sum>=9){
                ans+='9';
                sum-=9;
            }
            else{
                ans+=('0'+ sum);
                sum=0;
            }
        }

        return ans; 
    }
};