// link - https://leetcode.com/problems/generate-parentheses/description/

class Solution {
public:
    bool is_valid(string s){
        stack<char>st;
        for(auto g:s){
            if(st.empty()){
                st.push(g);
            }
            else{
                if(g==')' && st.top()=='(') st.pop();
                else st.push(g);
            }
        }
        return st.empty();
    }

    void generate(int i,int n,string &s,vector<string>&vs){
        if(i==(2*n)){
            if(is_valid(s)) vs.push_back(s);
            return ;
        }

        generate(i+1,n,s+='(',vs);
        s.pop_back();
        generate(i+1,n,s+=')',vs);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string>vs;
        string s;
        generate(0,n,s,vs);
        return vs;
    }
};
