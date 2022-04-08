class KthLargest {
public:
    
    priority_queue<int, vector<int>, greater<int>> stream;
    int pin;
    
    KthLargest(int k, vector<int>& nums) {
        pin=k;
        for(int num:nums){
            if(stream.size()<pin){
                stream.push(num);
            }else{
                if(num>stream.top()){
                    stream.pop();
                    stream.push(num);
                }
            }
        }
    }
    
    int add(int val) {
        if(stream.size()<pin){
                stream.push(val);
            }else{
                if(val>stream.top()){
                    stream.pop();
                    stream.push(val);
                }
            }
        return stream.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */