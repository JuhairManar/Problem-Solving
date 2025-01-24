class Solution {
    void solve(string s,string dn[],string t,int index,vector<string>& vs)
    {
        if(index>=s.size())
        {
            vs.push_back(t);
            return;
        }
        int f=s[index]-'0',i;
        string temp=dn[f];
        for(i=0;i<temp.size();i++)
        {
            t+=temp[i];
            solve(s,dn,t,index+1,vs);
            t.pop_back();
        }
    }
public:
vector<string> letterCombinations(string s)
{
    vector<string> vs;
    string t="";
    int n = s.size(), i;
    if (n == 0)
    {
        // vs.push_back("");
        return vs;
    }
    // cout<<"n = "<<n<<endl;
    string dn[10];
    dn[2] = "abc";
    dn[3] = "def";
    dn[4] = "ghi";
    dn[5] = "jkl";
    dn[6] = "mno";
    dn[7] = "pqrs";
    dn[8] = "tuv";
    dn[9] = "wxyz";
    solve(s,dn,t,0,vs);

    return vs;
}
    
};
