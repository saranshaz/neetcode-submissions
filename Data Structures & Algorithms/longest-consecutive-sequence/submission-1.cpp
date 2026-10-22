class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
        int maxi=0;
       unordered_set<int>st(nums.begin(),nums.end());
       for(auto num : nums){
        if(st.find(num-1)==st.end()){
            int length=1;
            while(st.find(num+length)!= st.end()){
                length++ ;
            }
            maxi = max(length, maxi);
        }
       }
       return maxi;
        
    }
};
