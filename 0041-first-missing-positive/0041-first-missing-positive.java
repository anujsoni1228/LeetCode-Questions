class Solution {

    public int firstMissingPositive(int[] nums) {
        // pehle sare -ve and 0 ko n+1 ke barabar banado taki vo disturb na kre baki logic ko
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] <= 0) nums[i] = nums.length + 1;
        }

        // use the same array like a map or set
        // ab har value ki index banake usi array me -ve mark krdo (that shows it is present)
        for (int i = 0; i < nums.length; i++) {
            if (Math.abs(nums[i]) - 1 < nums.length && nums[Math.abs(nums[i]) - 1] > 0) {
                nums[Math.abs(nums[i]) - 1] *= -1;
            }
        }

        // ab i=1 se traverse krna start kro or dekho konsa pehla i -ve marked nahi he 
        // that will be your ans
        for (int i = 1; i <= nums.length; i++) {
            if (nums[i - 1] > 0) return i;
        }

        // kuch na mile to 
        return nums.length + 1;
    }
}
