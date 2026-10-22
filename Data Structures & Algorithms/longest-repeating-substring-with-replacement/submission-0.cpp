class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxc =0;
        int l=0;
        int n = s.length();
        unordered_map<char,int> arr;
        int ans =0;
        for(int i=0;i<s.length();i++){
              arr[s[i]]++ ;
              maxc = max(maxc,arr[s[i]]);
              while((i-l+1)-maxc > k){
                 arr[s[l]]--;
                l++ ;
               
              }
              ans = max(ans, i-l+1);

        }
        return ans;
        
    }
};
