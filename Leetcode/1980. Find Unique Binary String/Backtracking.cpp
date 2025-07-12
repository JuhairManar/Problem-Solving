// link - https://leetcode.com/problems/find-unique-binary-string/?source=submission-ac


class Solution {
public:

    void str(set<string>&st,string& base,string& s,int n,int i,bool &f){
        if(i==n){
            // cout<<s<<endl;
            if(st.find(s)==st.end()) f=1;
            return ;
        }
        if(f) return;
        if(f==0){
            s+=base[i];
            str(st,base,s,n,i+1,f);
        }
        
        // if(a==1) return 1;
        if(f) return;

        if(f==0){
            s.pop_back();
            s+=(base[i]=='1')?'0':'1';
            str(st,base,s,n,i+1,f);
        }

        if(f) return;
        s.pop_back();
        
    }

    string findDifferentBinaryString(vector<string>& nums) {
        set<string>st(nums.begin(),nums.end());
        int n=nums.size(),i,a;
        bool f;
        string base(n,'0');
        string s;
        str(st,base,s,n,0,f);

        return s;

    }
};
