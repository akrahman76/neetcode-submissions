class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>frequency;
        priority_queue<pair<int,int>>pq;
        vector<int>result;

        for(int n:nums){
            frequency[n]++;
        }

        for(auto& it:frequency){
            pq.push({it.second,it.first});
        }

        while(k>0){
            pair<int,int>p = pq.top();
            pq.pop();
            k--;
            result.push_back(p.second);
        }

        return result;
    }
};
