class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int t_el;
        for (int i=0;i<size(nums);++i){
            t_el = target - nums[i];
            for(int j=i+1;j<size(nums);++j)
                if(t_el == nums[j]) return {i,j};
        }
        return {};
    }
};