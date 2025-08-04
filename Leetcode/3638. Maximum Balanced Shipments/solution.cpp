// link -https://leetcode.com/problems/maximum-balanced-shipments/description/

class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
        int s=0,i,j,mx=w[0],c=0,n=w.size();
        for(i=1;i<n;i++){
            if(w[i]<mx){
                s++;
                if(i+1<n){
                    mx=w[i+1];
                    i+=1;
                }
            }
            else mx=w[i];
        }

        return s;
    }
};
