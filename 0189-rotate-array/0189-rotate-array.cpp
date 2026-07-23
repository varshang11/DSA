class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int index=0;
        int arr[n];
        k=k%n;
        for(int i=n-k;i<n;i++)
            arr[index++]=nums[i];
        for(int i=0;i<n-k;i++)
            arr[index++]=nums[i];
        for(int i=0;i<n;i++)
            nums[i]=arr[i];

        // int n=nums.size();
        // k=k%n;
        // reverse(nums.begin(),nums.begin()+(n-k));
        // reverse(nums.begin()+(n-k),nums.end());
        // reverse(nums.begin(),nums.end());
    }
};