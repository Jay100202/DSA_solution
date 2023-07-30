class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int preSum = 0,cnt = 0;
        for(int i = 0;i<nums.size();i++){
            preSum += nums[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
        // int cnt = 0;
        // for(int i = 0;i<nums.size();i++){
        //     int sum = 0;
        //     for(int j = i;j<nums.size();j++){
        //         sum += nums[j];

        //         if(sum == k){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;    t.c = O(n^2) s.c = o(1)
    }
};