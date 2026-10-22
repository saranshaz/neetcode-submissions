class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] ={0};
        for(auto s1 : s){
            count[s1-'a']++;

        }
        for(auto s1 : t){
            count[s1-'a']--;
        }
        for(auto x :  count){
            if(x!=0){
            return false;
        }
        
        }
        return true;
        
        
    }
};
