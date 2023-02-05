class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size();

    while(start<end){
    if(nums[start] == target){
        return start;
    }
    
    if(nums[start]>target){
        return start;
    }

    start++;
    }
 return nums.size();   
}
    
};
