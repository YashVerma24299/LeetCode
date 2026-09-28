class Solution {
public:
    int count(vector<int>&arr, int mid){
        int cnt=1; 
        int sum=0;
        
        for(int i=0; i<arr.size(); i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }else{
                sum=arr[i];
                cnt++;
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l=*max_element(nums.begin(), nums.end()),r=0;
        for(auto ele: nums) r+=ele;
        int ans=0;

        while(l<=r){
            int mid= l+(r-l)/2;

            if(count(nums,mid) > k){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        return l; 
    }
};