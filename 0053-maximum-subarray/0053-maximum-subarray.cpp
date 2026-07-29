class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // int n=nums.size();
        // int maxSum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum+=nums[k];
        //         }
        //         maxSum=max(sum,maxSum);
        //     }
        // }
        // return maxSum;            //TLE

        // int n=nums.size();
        // int maxSum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         maxSum=max(sum,maxSum);
        //     }
        // }
        // return maxSum;          //TLE



        int curSum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            curSum=max(nums[i],curSum+nums[i]);
            maxSum=max(curSum,maxSum);
        }
        return maxSum;
    }
};