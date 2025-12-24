class LRUCache {
public:
    int size;
    map<int, int> m;
    deque<int>dq;
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        // cout<<key<<"\n";
        // cout<<"printing keys of  map indise get\n";
        // for(auto g:m) cout<<g.first<<"\n";
        if(m.find(key)!=m.end()) return m[key];
        // cout<<"returing\n";
        return -1;
    }
    
    void put(int key, int value) {
        // cout<<key<<" "<<value<<"\n";
        // cout<<m.size()<<"\n";
        if(m.find(key)!=m.end()) {
            // m[key]=value;
            stack<int>st;
            while(dq.front()!=key){
                st.push(dq.front());
                dq.pop_front();
            }

            dq.pop_front();
            dq.push_back(key);

            while(st.size()){
                dq.push_front(st.top());
                st.pop();
            }

            // if(dq.size())cout<<dq.front()<<"\n";
        }


        else{
            // cout<<key<<" "<<value<<" 2\n";
            // m[key]=value;
            if(m.size()==size){
                // cout<<dq.front()<<"\n";
                m.erase(dq.front());
                dq.pop_front();
                dq.push_back(key);
            }
            else{
                dq.push_back(key);
            }
        }
        // cout<<dq.front()<<"\n";
        m[key]=value;
        // cout<<"printing keys of map inside put\n";
        // for(auto g:m) cout<<g.first<<"\n";
        // cout<<m[key]<<"\n";
    }

    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
