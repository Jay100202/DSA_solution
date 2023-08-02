class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // brute force
        // int n = intervals.size();
        // vector<vector<int>> ans;
        // sort(intervals.begin(),intervals.end());
        // for(int i = 0;i<n;i++){
        //     int start = intervals[i][0];
        //     int end = intervals[i][1];
        //     // this means i am lying in you for eg if we have 1,6 and then we move to 2,4 means 2,4 is there 
        //     if(!ans.empty() && end <= ans.back()[1]){
        //         continue;
        //     }
        //     for(int j = i+1;j<n;j++){
        //         // means it is lying means suppose we have 1,3 and 2,4 
        //         if(intervals[j][0] <= end){
        //             end = max(end,intervals[j][1]);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     ans.push_back({start,end});
        // }
        // return ans;

        // optimal
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            // suppose we have 8,9 and 1,6 so we know that 8,9 cannot be part of 1,6 so 8,9 will makes it new interval
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                // lying inside suppose we have 2,4 and 1,3 which means that 2,4 is lying inside so
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};