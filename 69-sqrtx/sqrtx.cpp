class Solution {
public:
    int mySqrt(int x) {
    //    int n =  sqrt(x);
    //    return n;

    // int ans = 1;
    // if(x == 0){
    //     return 0;
    // }
    // for(int i = 0;i<x;i++){
    //     if(i*i<=x){
    //         ans = i;
    //         continue;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // return ans;
    // }

    long low = 1,high = x;
    long ans = 1;
    if (x == 0 || x == 1)
         return x;
    while(low <= high){
        long mid = (low + high)/2;

        if(mid * mid <= x){
            ans = mid;
            low = mid + 1;

        }
        else{
            high = mid - 1;
        }

    }
    return ans;
    }
};