class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        int i=0;
        int j=n-1;
        while(i<=j){
              char left = tolower(s[i]);
              char right = tolower(s[j]);
              if(!isalnum(left)){
                i++;
                continue;
              }
              if(!isalnum(right)){
                j--;
                continue;
              }
              if(left != right){
               
                return false;
              }
              i++;
                j--;



        }
        return true;
        
    }
};
