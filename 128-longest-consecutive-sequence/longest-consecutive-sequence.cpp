class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1;
        int last_smaller = INT_MIN;
        int longest = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]-1 == last_smaller){
                cnt++;
                last_smaller = nums[i];
            }
            else if(nums[i] != last_smaller){
                cnt = 1;
                last_smaller = nums[i];
            }
            longest = max(longest,cnt);
        }
       return longest;
    }
};