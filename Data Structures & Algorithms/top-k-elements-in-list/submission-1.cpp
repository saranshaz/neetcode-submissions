class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> res;
        int n = nums.size();
        for (int mp : nums) {
            res[mp]++;
        }
       priority_queue<pair<int,int>> pq;
       for(auto s : res){
        pq.push({s.second, s.first});
       }
       vector<int> result;
       while(k--){
  result.push_back(pq.top().second);
  pq.pop();
       }
       return result;
        
    }
};
