class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // for(int i = 0;i<nums.size();i++){
        //     if((i == 0 || nums[i-1] < nums[i]) && (i == nums.size() - 1 || nums[i] > nums[i+1])){
        //         return i;
        //     }
        // }
        // return -1;   o(N)

        if(nums.size() == 1){
            return 0;
        }

        if(nums[0] > nums[1]){
            return 0;
        }
        if(nums[nums.size() - 1] > nums[nums.size() - 2]){
            return nums.size() - 1;
        }

        int low = 1,high = nums.size() - 2;
        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid + 1]){
                return mid;
            }

            else if(nums[mid] > nums[mid - 1]){
                low = mid + 1;
            }
            else if(nums[mid] > nums[mid + 1]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};