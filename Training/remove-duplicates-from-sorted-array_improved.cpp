class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        int flag = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (flag != nums[i]) {
                nums[count++] = nums[i];
                flag = nums[i];
            }
        } 
        return count;
    }
};
