class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int edge=0;
        int num1=num;
        while(num1--){
            edge+=9;
        }
        if(edge<sum){
            return "";
        }

        int size=num;

        string ans="";
        while(num--){
            if(9>sum){
                ans.push_back(sum+'0');
                int sizee=ans.size();
                ans.append(size-sizee, '0');
                break;
            }
            ans.push_back('9');
            sum-=9;
        }
        return ans;
    }
};