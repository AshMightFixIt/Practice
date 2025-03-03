class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case: empty array

        int j = 1; // Pointer for the next unique element position

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { // Only keep unique elements
                nums[j] = nums[i];
                j++;
            }
        }

        return j; // The new length of the array
    }
};