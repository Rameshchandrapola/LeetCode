class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>m1;
    unordered_map<string,pair<int,int>>m2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
            m1[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string,int>temp=m1[id];
        m1.erase(id);
        string path=temp.first+"-"+stationName;
        m2[path].first += t-temp.second;
        m2[path].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
            string route=startStation+"-"+endStation;
        pair<int,int>temp=m2[route];
        return (double) temp.first/temp.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */