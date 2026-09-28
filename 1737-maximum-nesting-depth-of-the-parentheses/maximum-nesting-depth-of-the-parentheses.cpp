class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ans=0;

        for(auto ele: s){
            ans=max(ans,cnt);
            if(ele=='('){
                cnt++;
            }
            else if(ele==')'){
                cnt--;
            }
        }
        return ans;
    }
};