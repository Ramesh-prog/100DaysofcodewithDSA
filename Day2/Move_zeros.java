/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
class Solution2 {
    public void moveZeroes(int[] nums) 
    {
        if (nums == null || nums.length == 0) 
            return;        

        int insertPos = 0;
        for (int num: nums) 
        {
            if (num != 0) nums[insertPos++] = num;
        }        

        while (insertPos < nums.length) 
        {
            nums[insertPos++] = 0;
        }
    }
}