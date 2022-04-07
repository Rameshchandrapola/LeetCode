class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1)
        {
            int b=pq.top();
            pq.pop();
            int a=pq.top();
            pq.pop();
            if(a!=b) pq.push(b-a);
        }
        return pq.empty()? 0 : pq.top();
    }
};