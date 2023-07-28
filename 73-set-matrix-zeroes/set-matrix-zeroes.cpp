class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {

        int m = arr.size();
        int n = arr[0].size();
        int col = 1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==0)
                {
                    arr[i][0] = 0;
                    if(j!=0)
                    {
                        arr[0][j] = 0;
                    }
                    else
                    {
                        col = 0;
                    }
                }
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i][j]!=0)
                {
                    if(arr[i][0]==0 || arr[0][j]==0)
                    {
                        arr[i][j] = 0;
                    }
                }
            }
        }
        if(arr[0][0]==0)
        {
            for(int j=0;j<n;j++)
            {
                arr[0][j] = 0;
            }
        }
        if(col==0)
        {
            for(int i=0;i<m;i++)
            {
                arr[i][0]= 0;
            }
        }
        // int m=matrix.size(),n=matrix[0].size();
        // vector<int> col(n,0);
        // vector<int> row(m,0);

        // for(int i = 0;i<m;i++){
        //     for(int j = 0;j<n;j++){
        //         if(matrix[i][j] == 0){
        //             row[i] = 1;
        //             col[j] = 1;
        //         }
        //     }
        // }

        // for(int i = 0;i<m;i++){
        //     for(int j = 0;j<n;j++){
        //         if(row[i] || col[j]){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    }    // t.c = o(n^2) // s.c = o(n+m)  
};