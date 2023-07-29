class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // brute force 
        // int n=matrix.size();
        // vector < vector < int >> ans(n, vector < int > (n, 0));
        // for(int i = 0;i<n;i++){
        //     for(int j = 0;j<n;j++){
        //         ans[j][n-i-1] = matrix[i][j];
        //     }
        // }
        // matrix = ans;   T.C = O(n^2) S.C = O(n^2)

        int n = matrix.size();
        // step 1 transpose
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // step 2 reverse every row
        for(int i = 0;i<n;i++){
            // row is matrix[i]
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};