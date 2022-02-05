//CODE:
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1){
            
            return nums.size();
        }
        
        int i = 0;
        for(int j=1;j < nums.size(); j++){
            
            if(nums[j]!= nums[i]){
                
                i++;
                nums[i] = nums[j];
            }
        }
        
        return i + 1;
    }
};
