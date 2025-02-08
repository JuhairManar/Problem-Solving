class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;

        for(auto g:strs){
            string s=g;
            sort(s.begin(),s.end());
            m[s].push_back(g);
        }

        vector<vector<string>>v;

        for(auto g:m){
            v.push_back(g.second);
        }

        return v;


    }
};
