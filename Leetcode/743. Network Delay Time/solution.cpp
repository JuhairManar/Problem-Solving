class Solution {
public:
vector<pair<int,int>>v[1005];
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int i,j,mx=-1,a,x,y;
        for(i=0;i<times.size();i++)
        {
            a=times[i][0];
            x=times[i][1];
            y=times[i][2];
            v[a].push_back({x,y});
        }
        vector<int>d(n+1,32000);
        vector<int>vis(n+1,0);

        d[k]=0;
        d[0]=0;
        priority_queue<pair<int,int>>pq;
        pq.push({0,k});
        while(!pq.empty())
        {
            int a,b,sn;
            pair<int,int>t=pq.top();
            pq.pop();
            sn=t.second;
            cout<<sn<<endl;
            if(vis[sn])
            {
                continue;
            }
            vis[sn]=1;
            for(auto g:v[sn])
            {
                a=g.first;
                b=g.second;
                if(d[sn]+b<d[a])
                {
                    d[a]=d[sn]+b;
                    pq.push({-d[a],a});
                }
            }
        }
        //dijkstra ends
        for(i=0;i<=n;i++)
        {
            cout<<d[i]<<" ";
            mx=max(d[i],mx);
        }
        cout<<endl;
        if(mx==32000)
        {
            return -1;
        }
        return mx;
    }
};
