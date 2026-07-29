class Solution {
public:
    void sortColors(vector<int>& nums) {

        // int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=0;j<n-i-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }

        // int n=nums.size();
        // int cnt0=0,cnt1=0,cnt2=0;
        // for(int num:nums){
        //     if(num==0) cnt0++;
        //     else if(num==1) cnt1++;
        //     else cnt2++;
        // }
        // for(int i=0;i<cnt0;i++)
        //     nums[i]=0;
        // for(int i=cnt0;i<cnt0+cnt1;i++)
        //     nums[i]=1;
        // for(int i=cnt0+cnt1;i<n;i++)
        //     nums[i]=2;

        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};