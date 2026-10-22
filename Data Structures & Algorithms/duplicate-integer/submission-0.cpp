class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for(int num : nums){
            st.insert(num);

        }
        if(st.size()==n){
            return false;
        }
        return true;
    }
};