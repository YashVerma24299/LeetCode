class Solution {
    int MOD = 1000000007;
    public int numOfSubarrays(int[] arr) {
        int prefix=0, evenCnt=1, oddCnt=0, ans=0;

        for(int ele: arr){
            prefix+=ele;

            if((prefix & 1) ==1){
                ans+=evenCnt;
                oddCnt++;
            }else{
                ans+=oddCnt;
                evenCnt++;
            }

            ans = ans%MOD;
        }

        return ans;
    }
}