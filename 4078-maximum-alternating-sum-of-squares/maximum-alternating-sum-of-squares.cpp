class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int minus=-1;
        for(int i=0; i<nums.size(); i++) if(nums[i]<0) nums[i]=nums[i]*minus;
        sort(nums.begin(), nums.end());

        int l=0, r=nums.size()-1;
        long long ans=0;

        while(l<r){
            ans+=(nums[r]*nums[r]);
            ans-=(nums[l]*nums[l]);
            r--,l++;
        }

        return (r==l) ? ans+(nums[r]*nums[r]) : ans;
    }
};