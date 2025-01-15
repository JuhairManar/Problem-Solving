class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0,n=piles.size()-1,c=0;
        vector<int>v(2,0);
        while(i<=n){
            if(piles[i]>piles[n]){
                v[c%2]+=piles[i];
                i++;
            }
            else{
                v[c%2]+=piles[n];
                n--;
            }
            c++;
        }

        return v[0]>v[1]?"True":"False";
    }
};
