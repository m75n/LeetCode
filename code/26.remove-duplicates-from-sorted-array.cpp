/*
 * [26] Remove Duplicates from Sorted Array
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array
 *
 * Easy (35.56%)
 * Total Accepted:    230214
 * Total Submissions: 647285
 * Testcase Example:  '[]'
 *
 * 
 * Given a sorted array, remove the duplicates in place such that each element
 * appear only once and return the new length.
 * 
 * 
 * Do not allocate extra space for another array, you must do this in place
 * with constant memory.
 * 
 * 
 * 
 * For example,
 * Given input array nums = [1,1,2],
 * 
 * 
 * Your function should return length = 2, with the first two elements of nums
 * being 1 and 2 respectively. It doesn't matter what you leave beyond the new
 * length.
 * 
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 1, n = nums.size();

        if (n < 2) return n;

        for (int i = 1; i < n; ++i)
            if (nums[i] != nums[i - 1])
                nums[res++] = nums[i];

        return res;
    }
};
