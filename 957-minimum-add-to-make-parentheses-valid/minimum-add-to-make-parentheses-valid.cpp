class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0,ans=0;

        for(auto ele: s){
            if(ele=='(') cnt++;
            else if(cnt>0) cnt--;
            else ans++;
        }
        return abs(cnt)+ans;
    }
};