class Solution {
public:
    bool check(vector<int>&v, int m, int k, int day){
        int cnt=0, ans=0;

        for(int i=0; i<v.size(); i++){
            if(v[i]<=day) cnt++;
            else{
                ans+=(cnt/k);
                cnt=0;
            }
        }
        ans=ans+(cnt/k);

        return ans>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if(n <(long long) m*k) return -1;

        int l=*min_element(bloomDay.begin(), bloomDay.end());
        int r= *max_element(bloomDay.begin(), bloomDay.end());
        int ans=0;

        while(l<=r){
            int mid= l+(r-l)/2;

            if(check(bloomDay, m,k,mid)){
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