class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxi = INT_MIN;
        // int product = 1;
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i;j<nums.size();j++){
        //         product = 1;
        //         for(int k = i;k<j;k++){
        //             product = product * nums[k];
        //         }
        //         maxi = max(product,maxi);
        //     }
        // }
        // return maxi;

        // better
        // int maxProd = INT_MIN;
        // int prod = 1;
        
        // for( int i = 0; i < nums.size(); i++ ){
        //     prod = 1;
        //     for( int j = i; j < nums.size(); j++ ){
        //         prod *= nums[j];
        //         maxProd = max( maxProd, prod );
        //     }
        // }
        // return maxProd;

        // optimal 
        int maxi = INT_MIN;
        int pref = 1, suff = 1;
        for(int i = 0;i<nums.size();i++){
            if(pref == 0){
                pref = 1;
            }
            if(suff == 0){
                suff = 1;
            }

            pref = pref * nums[i];
            suff = suff * nums[nums.size()-i-1];
            maxi = max(maxi,max(pref,suff));
        }
        return maxi;
    }
};