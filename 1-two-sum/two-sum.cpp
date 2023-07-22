class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            int num = nums[i];
            int needed = target - num;
            if(mpp.find(needed) != mpp.end()){
                return {mpp[needed],i};
            }
            mpp[num] = i;
        }
        return {-1,-1};     //  t.c = o(nlogn)

        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }                         
        // }
        // return {-1,-1};      t.c = o(n^2) approx
    } 
};