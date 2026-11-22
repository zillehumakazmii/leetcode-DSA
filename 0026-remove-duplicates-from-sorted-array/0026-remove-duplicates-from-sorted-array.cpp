class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int head = 0;
        int i = 1;
        int unique = 1;
        int n = nums.size();
//done
        while (i < n) {
            if (nums[i] == nums[i-1]) {
                i++;
            }
            else {
                nums[head+1] = nums[i];
                i++;
                head++;
                unique++;
            }
        }

        return unique;
    }
};