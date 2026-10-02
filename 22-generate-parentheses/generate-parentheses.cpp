class Solution {
public:
    vector<string> ans;
    void f(int n, string s, int open, int close){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }

        if(open<n){
            f(n,s+"(", open+1, close);
        }
        if(open>close){
            f(n,s+")", open, close+1);
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        f(n,"(",1,0);
        return ans;
    }
};