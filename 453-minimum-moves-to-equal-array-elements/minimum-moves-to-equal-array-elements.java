class Solution {
    public int minMoves(int[] nums) {
        int minElement = Arrays.stream(nums).min().getAsInt();
        int ans=0;

        for(int ele: nums){
            ans+=(ele - minElement);
        }

        return ans;
    }
}