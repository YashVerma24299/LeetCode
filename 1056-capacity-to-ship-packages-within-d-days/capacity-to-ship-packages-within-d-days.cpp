class Solution {
public:
    int check (vector<int>v, int w){
        int sum=0,cnt=1;
        for(auto ele: v){
            if(sum+ele > w){
                sum=ele;
                cnt++;
            }else sum+=ele;
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int l=*max_element(weights.begin(), weights.end()),r=0;
        for(auto ele: weights) r+=ele;
        int ans=0;

        while(l<=r){
            int mid= l+(r-l)/2;

            if(check(weights,mid)<= days){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return ans; 
    }
};
