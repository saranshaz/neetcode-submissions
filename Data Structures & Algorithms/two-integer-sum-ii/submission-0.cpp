class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i =0;
        unordered_map<int,int>mp;
        for(int num : numbers){
            int rem = target - num;
            if(mp.find(rem)!=mp.end()){
                return {mp[rem]+1,i+1};
            }
            mp[num] = i ;
            i++;

        }
        
    }
};
