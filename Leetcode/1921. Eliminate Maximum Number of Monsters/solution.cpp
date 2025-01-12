class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size(),i,mn=INT_MAX,t=n,tc=0,counting=0;
        vector<int>time(n);
        for(i=0;i<n;i++){
            time[i]=ceil(float(dist[i])/float(speed[i]));
        }

        sort(time.begin(),time.end());

        
        for(i=0;i<n;i++){
            if(i>=time[i]) return i;
        }



        return i;

    }
};
