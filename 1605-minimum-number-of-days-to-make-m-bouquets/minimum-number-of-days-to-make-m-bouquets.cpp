class Solution {
public:
    bool check(vector<int>& v, int m, int k, int day){
        int cnt=0;
        int ans=0;
        int n=v.size();
        //basically mai ocurance chaeck krrha hu
        // usss number ke jo kmm hai present day se
        for(int i=0; i<n; i++){
            if(v[i]<=day){
                cnt++;
            }else{
                ans=ans+(cnt/k);
                cnt=0;
            }
        }
        ans=ans+(cnt/k);

         return ans>=m;
        // if(ans>=m){
        //     return true;
        // }
        // return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        //base case
        int n=bloomDay.size();
        if(n<(long long)m*k){
            return -1;
        }
        int minn=*min_element(bloomDay.begin(),bloomDay.end());
        int maxx=*max_element(bloomDay.begin(),bloomDay.end());

        int ans=-1;

        while(minn<=maxx){
            int mid=(minn+maxx)/2;

            if(check(bloomDay,m,k,mid)==true){
                ans=mid;
                maxx=mid-1;
            }else{
                minn=mid+1;
            }
        }
        return ans;

    }
};