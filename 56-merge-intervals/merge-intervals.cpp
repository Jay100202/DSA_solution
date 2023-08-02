class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<n;i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            // this means i am lying in you for eg if we have 1,6 and then we move to 2,4 means 2,4 is there 
            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }
            for(int j = i+1;j<n;j++){
                // means it is lying means suppose we have 1,3 and 2,4 
                if(intervals[j][0] <= end){
                    end = max(end,intervals[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};