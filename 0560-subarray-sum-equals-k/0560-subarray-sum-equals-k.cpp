class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum+=nums[k];
        //         }
        //         if(sum==k)
        //             count++;
        //     }
        // }
        // return count;          //TLE

        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k)
        //             count++;
        //     }
        // }
        // return count;

        unordered_map<int,int> mp;
        mp[0]=1;
        int prefSum=0,count=0;
        for(int i=0;i<nums.size();i++){
            prefSum+=nums[i];
        
            if(mp.find(prefSum-k)!=mp.end())
                count+=mp[prefSum-k];
            
            mp[prefSum]++;
        }
        return count;
    }
};