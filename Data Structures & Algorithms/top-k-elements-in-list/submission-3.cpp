class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int ,int >mp;
        for(int c : nums){
            mp[c]++ ;
        }
        priority_queue<pair<int,int>> pq;
        for(auto c : mp){
            pq.push({c.second , c.first});
        }

        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
