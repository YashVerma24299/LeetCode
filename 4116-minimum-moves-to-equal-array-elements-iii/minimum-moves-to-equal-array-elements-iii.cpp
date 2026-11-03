class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx=*max_element(nums.begin(), nums.end());
        int ans=0;

        for(auto ele: nums){
            ans+=maxx-ele;
        }
        return ans;
    }
};