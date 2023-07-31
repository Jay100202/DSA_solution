class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // brute force 
        // vector<int> ans;
        // int n = nums.size();
        // for(int i = 0;i<n;i++){
        //     if(ans.size() == 0 || ans[0] != nums[i]){
        //         int cnt = 0;
        //         for(int j = 0;j<n;j++){
        //             if(nums[i] == nums[j]){
        //                 cnt++;
        //             }
        //         }

        //         if(cnt > n/3){
        //             ans.push_back(nums[i]);
        //         }
        //     }
        //     if(ans.size() == 2){
        //     break;
        //    }
        // }
        // return ans;   t.c = o(n^2) s.c = o(1)

        // better solution 1
        // unordered_map<int,int> mpp;
        // vector<int> ans;
        // int n = nums.size(); 
        // for(int i = 0;i<n;i++){
        //    mpp[nums[i]]++;
        // }

        // for(auto it:mpp){
        //     if(it.second > n/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;   t.c = o(2n)  s.c = o(n)  

        // better solution 2
        int n = nums.size();
        unordered_map<int,int> mpp;
        vector<int> ans;
        int mini = (int) (n/3) + 1;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini){
                ans.push_back(nums[i]);
            }

            if(ans.size() == 2){
                break;
            }
        }
        return ans;
    }
};