class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force

        // for(int i = 0;i<nums.size();i++){
        //     int cnt = 0;
        //     for(int j = 0;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             cnt++;
        //         }
        //     }

        //     if(cnt > nums.size()/2){
        //         return nums[i];
        //     }
        // }
        // return -1;  t.c = o(n^2) 

        unordered_map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            if(it.second > nums.size()/2){
                return it.first;
            }
        }

        return -1;
    }
};