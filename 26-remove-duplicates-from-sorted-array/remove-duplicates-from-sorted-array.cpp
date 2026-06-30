class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        if(nums.empty()) return 0;
        for(int i=1; i<nums.size(); i++){
            if (nums[i]==nums[i-1]){
            nums.erase(nums.begin()+i);//slide and remove
            i--;
            }
        }
        return nums.size();
    }
};