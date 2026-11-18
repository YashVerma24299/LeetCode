class Solution {
public:
    int minChanges(string s) {
        int ans=0;

        for(int i=0; i<s.length(); i++){
            if(i%2==1 && s[i]!=s[i-1]) ans++;
        }

        return ans;
    }
};