class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0,j=-1;
        for(int k=0;k<nums.size();k++){
            if(nums[i] < nums[k]){
                i = k;
            }
        }

        for(int k=0;k<nums.size();k++){
            if(k!=i){
                if(j==-1 || nums[j] < nums[k]){
                    j = k;
                }
            }
        }

        return (nums[i]-1)*(nums[j]-1);
    }
};