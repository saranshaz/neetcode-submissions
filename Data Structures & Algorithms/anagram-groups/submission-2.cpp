class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto c : strs) {
            string sorted = c;
            sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(c);
        }

        vector<vector<string>> ans;
        for (auto c : mp) {
            ans.push_back(c.second);
        }
        return ans;
    }
};
