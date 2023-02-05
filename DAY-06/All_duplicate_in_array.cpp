class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;
        sort(nums.begin(), nums.end());

        int firstelement= nums[0];

        for(int i=1; i<nums.size(); i++){

            if((firstelement^nums[i])==0){
                ans.push_back(nums[i]);
            }
            firstelement= nums[i];
        }
        return ans;
    }
};
