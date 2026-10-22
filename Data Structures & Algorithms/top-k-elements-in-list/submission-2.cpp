class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(auto num :  nums){
            mp[num]++ ;

        }
        priority_queue<pair<int,int>>pq;
        for(auto pr :  mp){
            pq.push({pr.second,pr.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};
