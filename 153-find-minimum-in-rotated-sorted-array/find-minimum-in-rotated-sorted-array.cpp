class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int low = 0,high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
            // left half is sorted
            if(nums[low] <= nums[mid]){
                // pick the element and eleminate the left half
                ans = min(ans,nums[low]);
                low = mid + 1;
            }
            else{
                // righ is sorted 
                // pick the element and eleminate the right half
                ans = min(ans,nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};