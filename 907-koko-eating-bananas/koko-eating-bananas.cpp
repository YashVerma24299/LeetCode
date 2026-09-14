class Solution {
  public:
    long long f(vector<int>&v, int hour){
        long long reqTime=0;
        for(auto ele: v){
            if(ele<=hour){
                reqTime+=1;
            }else if(ele%hour==0){
                reqTime+=ele/hour;
            }else{
                reqTime=reqTime+(ele/hour)+1;
            }
        }
        return reqTime;
    }
    int minEatingSpeed(vector<int>& arr, int hour) {
        // Code here
        
        long long l=1,ans=0;
        long long r=*max_element(arr.begin(), arr.end());
        
        while(l<=r){
            long long mid=(l+r)/2;
            
            long long time = f(arr, mid);
            // cout<<hour<<endl;
            
            if(time<=hour){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};