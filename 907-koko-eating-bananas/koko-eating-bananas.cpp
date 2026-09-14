class Solution {
public:
    long f(int speed, vector<int>&v){
        long reqTime =0;
        for(auto ele:v){
            reqTime+=ceil((double)ele/speed);
        }
        return reqTime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=*max_element(piles.begin(), piles.end());
        int ans=0;

        while(l<=r){
            int mid =(l+r)/2;

            long reqTime = f(mid,piles);

            if(reqTime<=h){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};