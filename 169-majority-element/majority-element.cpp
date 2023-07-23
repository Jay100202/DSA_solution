class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // more voting algo 
        int cnt = 0;
        int el;
        for(int i = 0;i<nums.size();i++){
            if(cnt == 0){
                cnt++;
                el = nums[i];
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
       
        int cnt1 = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == el){
                cnt1++;
            }
        }

        if(cnt1 > nums.size()/2){
            return el;
        }

        return -1;            // t.c = o(n) + o(n) the second o(n) is optional

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

        // unordered_map<int,int> mpp;
        // for(int i = 0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto it:mpp){
        //     if(it.second > nums.size()/2){
        //         return it.first;
        //     }
        // }

        // return -1;           // t.c = o(nlogn) + o(n) nlogn depends upon which map u r using
        //                      // s.c = o(n)
    }
};