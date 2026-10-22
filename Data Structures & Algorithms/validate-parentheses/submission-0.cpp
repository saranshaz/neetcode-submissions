class Solution {
public:
   bool isMatch(char open , char close){
    if((open == '(' && close == ')') ||
     (open == '{' && close == '}') ||
     (open == '[' && close == ']')){
        return true;
     }
     return false;

   }
    bool isValid(string s) {
         stack<char> st;
         int n = s.size();
         for(int i=0;i<n;i++){
           if(s[i]== '(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
           }
           else{
            if(st.empty()) return false;
            char c = st.top();
            st.pop();
            if(!isMatch(c,s[i])){
                   return false;
            }
             
           }
         }
     return st.empty();

        
    }
};
