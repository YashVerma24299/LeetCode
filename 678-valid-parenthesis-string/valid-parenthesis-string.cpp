class Solution {
public:
    bool checkValidString(string s) {
        int low=0,high=0;

        // if(s.size()==1 && s[0]!='*' || s[s.size()-1]=='(') return false;

        for(int i=0; i<s.size(); i++){
            
            if(s[i]=='('){
                low++;
                high++;
            }
            else if(s[i]=='*'){
                high++;
                low--;
                if(low<0) low=0;
            }
            else{
                low--;
                high--;
                if(low<0) low=0;
            }

            if (high < 0) return false;
        }
        if(low==0 ) return true;

        return false;
    }
};