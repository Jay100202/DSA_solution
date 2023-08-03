class Solution {
public:

    void mergeSort(vector<int>& nums,int low,int high){
        if(low >= high){
            return;
        }
        int mid = (low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }

    void merge(vector<int>& nums,int low,int mid,int high){
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<= mid){
            temp.push_back(nums[left]);
            left++;
        }

        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low;i<=high;i++){
            nums[i] = temp[i-low];
        }
    }
    vector<int> sortArray(vector<int>& nums) {

        // Selection Sort
        // int n = nums.size();
        // for(int i = 0;i<n-1;i++){
        //     int mini = i;
        //     for(int j = i+1;j<n;j++){
        //         if(nums[j] < nums[mini]){
        //             mini = j;
        //         }
        //     }
        //     swap(nums[mini],nums[i]);
        // }
        // return nums;


        // bubble sort
        // int n = nums.size();
        // for(int i = n-1;i>=1;i--){
        //     for(int j = 0;j<i;j++){
        //         if(nums[j] > nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }
        // return nums;

        // insertion sort
        // int n = nums.size();
        // for(int i = 0;i<n;i++){
        //     int j = i;
        //     while(j>0 && nums[j-1] > nums[j]){
        //         swap(nums[j-1],nums[j]);
        //         j--;
        //     }
        // }
        // return nums;

        // merge sort
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};