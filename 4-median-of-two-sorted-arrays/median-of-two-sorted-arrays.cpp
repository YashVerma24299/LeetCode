class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<double>nums;
        nums.insert(nums.begin(),nums1.begin(),nums1.end());
        nums.insert(nums.end(),nums2.begin(),nums2.end());
        sort(nums.begin(),nums.end());

        return nums.size()%2!=0 ? nums[nums.size()/2] : (nums[nums.size()/2] + nums[(nums.size()/2)-1])/2;
    }
};