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
        // int n = nums.size();
        // unordered_map<int,int> mpp;
        // vector<int> ans;
        // int mini = (int) (n/3) + 1;
        // for(int i = 0;i<n;i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]] == mini){
        //         ans.push_back(nums[i]);
        //     }

        //     if(ans.size() == 2){
        //         break;
        //     }
        // }
        // return ans;

        //optimised solution
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        for(int i = 0;i<n;i++){
            if(cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i] == el1){
                cnt1++;
            }
            else if(nums[i] == el2){
                cnt2++;
            }
            else{
                cnt1--,cnt2--;
            }
        }

        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        for(int i = 0;i<n;i++){
            if(el1 == nums[i]){
                cnt1++;
            }
            if(el2 == nums[i]){
                cnt2++;
            }
        }

        int mini = (int)(n/3) + 1;
        if(cnt1 >= mini){
            ans.push_back(el1);
        }
        if(cnt2 >= mini){
            ans.push_back(el2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};