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

        // Printing results inside the function
        cout << "New length: " << j << endl;
        cout << "Modified array: ";
        for (int i = 0; i < j; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return j; // The new length of the array
    }
};