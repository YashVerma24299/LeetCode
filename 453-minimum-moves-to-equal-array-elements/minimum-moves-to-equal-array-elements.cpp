class Solution {
public:
    int minMoves(vector<int>& nums) {
        long minElement = *min_element(nums.begin(),nums.end());
        int ans=0;

        for(auto ele: nums){
            ans+=(ele - minElement);
        }

        return ans;
    }
};