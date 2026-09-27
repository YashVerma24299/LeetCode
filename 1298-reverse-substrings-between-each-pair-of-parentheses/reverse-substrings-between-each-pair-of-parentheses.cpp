class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans="";

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                int top=st.top(); st.pop();
                reverse(s.begin()+top, s.begin()+(i+1));

            }
        }

        for(auto ele: s) if(ele!='(' && ele!=')') ans.push_back(ele);

        return ans;
    }
};