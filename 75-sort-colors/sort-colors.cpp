class Solution {
public:
    void sortColors(vector<int>& nums) {
        // By Dutch National flag Algorithm

        int low = 0, mid = 0,high = nums.size() - 1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }                    // t.c = o(n)  s.c = o(1)

    // int cnt_0 = 0;
        // int cnt_1 = 0;
        // int cnt_2 = 0;
        // for(int i = 0;i<nums.size();i++){
        //     if(nums[i] == 0){
        //         cnt_0++;
        //     }
        //     else if(nums[i] == 1){
        //         cnt_1++;
        //     }
        //     else{
        //         cnt_2++;
        //     }
        // }

        // for(int i = 0;i<cnt_0;i++){
        //     nums[i] = 0;
        // }

        // for(int i = cnt_0;i<cnt_0+cnt_1;i++){
        //     nums[i] = 1;
        // }

        // for(int i = cnt_0+cnt_1;i<nums.size();i++){
        //     nums[i] = 2;
        // }           t.c = o(2n)  s.c = 0(1)           
};