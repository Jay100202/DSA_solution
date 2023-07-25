class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int ind = -1;
        int n = nums.size();

        // step 1 finding the breakpoint 
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        // if there is no break point then 
        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        // Step 2 Now after we got the breakpoint from the back to that breakpoint we have to 
        // find which is least greater
        for(int i = n-1;i>ind;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }

        reverse(nums.begin() + ind + 1,nums.end());

        // using stl function
        // next_permutation(nums.begin(),nums.end());
    }
};