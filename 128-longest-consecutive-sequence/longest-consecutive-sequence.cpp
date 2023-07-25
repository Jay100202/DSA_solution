class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        unordered_set<int> s;
        int x,cnt=1,maxlen=0;
        for(int i=0;i<arr.size();i++)
        {
            s.insert(arr[i]);
        }
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                cnt=1;
                x=it+1;
                while(s.find(x)!=s.end())
                {
                    cnt++;
                    x=x+1;
                }
                maxlen=max(maxlen,cnt);
            }
        }
        return maxlen;
    //     sort(nums.begin(),nums.end());
    //     int cnt = 1;
    //     int last_smaller = INT_MIN;
    //     int longest = 0;
    //     for(int i = 0;i<nums.size();i++){
    //         if(nums[i]-1 == last_smaller){
    //             cnt++;
    //             last_smaller = nums[i];
    //         }
    //         else if(nums[i] != last_smaller){
    //             cnt = 1;
    //             last_smaller = nums[i];
    //         }
    //         longest = max(longest,cnt);
    //     }
    //    return longest;
    }
};