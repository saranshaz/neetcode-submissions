class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int lm = height[l];
        int rm = height[r];
        int ans =0;
        while(l < r){
            if(lm < rm ){
                l++ ;
                lm = max(lm,height[l]);
                ans += lm - height[l]; 

            }
            else{
                r--;
                rm = max(rm,height[r]);
                ans += rm-height[r];
            }
        }
        return ans;

        
    }
};
