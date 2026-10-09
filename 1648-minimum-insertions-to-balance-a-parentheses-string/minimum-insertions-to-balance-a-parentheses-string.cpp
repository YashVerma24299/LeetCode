class Solution {
public:
    int minInsertions(string s) {
        int open=0, cnt=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') open++;
            else{
                if(open>0){
                    open--;
                }
                else{
                    cnt++;
                }

                (i<s.size()-1 && s[i+1]==')') ? i++ : cnt++;
            }
        }
        return cnt+open*2;
    }
};