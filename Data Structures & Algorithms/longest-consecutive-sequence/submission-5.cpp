class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st;
        
        int maxi = 0;
        for(int c : nums){
            st.insert(c);
        }

        for(int i=0;i<nums.size();i++){
             if(st.find(nums[i]-1)==st.end()){
                int count =1;
                int ele = nums[i];
                while(st.find(ele+1)!=st.end()){
                    count++;
                    ele = ele +1;
                }
                maxi = max(count,maxi);


             }
             
        }
        return maxi;
    }
};
