class MyHashMap {
public:
    vector<pair<int,int>>v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(!v.size()){
            v.push_back({key,value});
            return;
        }
        int find=false;
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                v[i].second=value;
                find=true;
                break;
            }
        }
        if(!find){
            v.push_back({key,value});
        }
    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                return v[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(key==v[i].first){
                v.erase(v.begin()+i,v.begin()+i+1);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */