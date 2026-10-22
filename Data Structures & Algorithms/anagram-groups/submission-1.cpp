class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>ans;
       for(auto s : strs){
        string sorted = s;
        sort(sorted.begin(),sorted.end());
        ans[sorted].push_back(s);
       }
       vector<vector<string>>finali;
       for(auto st : ans){
           finali.push_back(st.second);
       }
       return finali;
        
    }
};
