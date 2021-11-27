/*
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/
class Solution4 {
    public int[] twoSum(int[] num, int target) 
    {
        int[] indice = new int[2];
        if (num == null || num.length < 2) return indice;
        int left = 0, right = num.length - 1;
        while (left < right) 
        {
            int v = num[left] + num[right];
            if (v == target) 
            {
                indice[0] = left + 1;
                indice[1] = right + 1;
                break;
            } 
            else if (v > target) 
            {
                right --;
            } 
            else 
            {
                left ++;
            }
        }
        return indice;
    }
}
