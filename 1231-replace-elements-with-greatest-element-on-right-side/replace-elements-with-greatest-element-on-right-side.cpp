class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int mx=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp=arr[i]; 
            arr[i]=mx;
            mx=max(mx,temp);
        }
        return arr;
        // brute force
        // if(arr.size()==1){
        //     arr[0]=-1;
        //     return arr;
        // }
        // for(int i=0;i<arr.size();i++){
        //     int mx=0;
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[j]>mx){
        //             mx=arr[j];
        //         }
                
        //     }
        //     arr[i]=mx;
        // }
        // arr[arr.size()-1]=-1;
        // return arr;   tle


    }
};