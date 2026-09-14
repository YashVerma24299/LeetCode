class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;

        int ans=1e9;

        while(l<=r){
            int mid=(l+r)/2;

            if(nums[l]<=nums[mid]){
                if(nums[l]<ans){
                    ans=nums[l];
                }
                l=mid+1;
            }
            else{
                if(nums[mid]<ans){
                    ans=nums[mid];
                }
                r=mid-1;
            }
        }


        return ans;
    }
};